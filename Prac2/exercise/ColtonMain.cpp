#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <filesystem>

// class for each line in the file
template <typename ValueType>
class LineContent
{
public:
	size_t m_index;
	ValueType m_value;

	// ctors
	LineContent() = default;
	LineContent(size_t index, ValueType value):
		m_index(index), m_value(value) {}

	// needed for std::find
	bool operator==(size_t index) const 
	{
		return this->m_index == index;
	}

	// allow us to read this class from a file
	friend std::istream& operator>>(std::istream& is, LineContent& obj)
	{
		// will automatically parse the \t token
		return is >> obj.m_index >> obj.m_value;
	}

	// allow us to print this obj
	friend std::ostream& operator<<(std::ostream& os, const LineContent& obj)
	{
		return os << "Index: " << obj.m_index << "\tValue: " << obj.m_value;
	}
};

// class for the file itself
template <typename ValueType>
class SubjectFile
{
public:
	// a vector of LineContent
	std::vector<LineContent<ValueType>> m_content;

	// read from file
	friend std::istream& operator>>(std::istream& is, SubjectFile& obj)
	{
		// will read each line into lineConent
		LineContent<ValueType> lineContent;
		while (is >> lineContent)
		{
			// push into vector
			obj.m_content.push_back(lineContent);
		}
		return is;
	}

	friend std::ostream& operator<<(std::ostream& os, const SubjectFile& obj)
	{
		// for each object, output
		for (const LineContent<ValueType>& lineConent : obj.m_content)
		{
			os << lineConent << std::endl;
		}
		return os;
	}
};

// entrypoint
int main(int argc, char** argv)
{
	// get the current path from argv[0], since fs::current_path doesn't really work
	std::filesystem::path currentPath = std::filesystem::path(argv[0]).parent_path();

	// vector of all files to read
	std::vector<std::filesystem::path> subjectPaths = {
		currentPath / "bangal.txt",
		currentPath / "english.txt",
		currentPath / "math.txt",
	};
	
	// vector for the actual objects
	std::vector<SubjectFile<size_t>> subjectFiles;
	subjectFiles.reserve(subjectPaths.size());

	// read each file, push into vector
	for (const std::filesystem::path& path : subjectPaths)
	{
		if (!std::filesystem::exists(path))
		{
			std::cerr << "Filepath " << path << " not found!" << std::endl;
			continue;
		}
		SubjectFile<size_t> file;
		std::ifstream(path) >> file;
		subjectFiles.push_back(file);
	}

	// create output object
	SubjectFile<double> averageSubjectFile;

	// get the first index value (should be 1)
	size_t firstIndex = subjectFiles.at(0).m_content.front().m_index;

	// get the last index value (should be 10)
	size_t lastIndex = subjectFiles.at(0).m_content.back().m_index;

	// for each index
	for (size_t index = firstIndex; index < lastIndex; index++)
	{
		// keep an average and a hitcount
		double average = 0;
		size_t hitCount = 0;

		// foreach subject file
		for (SubjectFile<size_t>& file : subjectFiles)
		{
			// search for the same index in this file
			std::vector<LineContent<size_t>>::iterator it = std::find(file.m_content.begin(), file.m_content.end(), index);

			// if found, add the average and inc the hitCount
			if (it != file.m_content.end())
			{
				average += it->m_value;
				hitCount++;
			}
		}

		// if the hitcount is more than zero, divide and add it to the result vector
		if (hitCount > 0)
		{
			average /= hitCount;
			averageSubjectFile.m_content.push_back({ index, average });
		}
	}

	// open the output file, write the results
	std::ofstream averageFile(currentPath / "average.txt");
	averageFile << averageSubjectFile;

	// also print the results to the console
	std::cout << "Results:" << std::endl << averageSubjectFile << std::endl;

	std::cout << "Done" << std::endl;
	std::cin.get();
	return 0;
}
