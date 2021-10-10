//A c program that create and open a text file name my_file and write some text on it before closing it
#include <stdio.h>

int main() {
	FILE *fp;
	char filename[] = "my_file.txt";

	// opening the file in write mode and storing the retunr value of function in pointer fp;
	fp = fopen(filename, "w");

	fprintf(fp, "This is a file created by my program! ");
	fprintf(fp, "I am so happy.");

	fclose(fp); //File closed

	return 0;
}