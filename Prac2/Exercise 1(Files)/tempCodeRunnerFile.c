#include <stdio.h>
#include <stdlib.h>


int main() {
    int NUM_FILES = 3;
    char*fileNames[NUM_FILES] = {
        "bangla.txt",
        "english.txt",
        "math.txt"
    };
    FILE* averageFile = fopen("average.txt", "w");

    for (int i = 0; i < NUM_FILES; i++) {
        FILE* file = fopen(fileNames[i], "r");
        float sum = 0;
        char* line = NULL;
        int numStudents = 0;

        while (getline(&line) != -1) {
            numStudents++;

            char* token = strtok(line, '\t'); // get (and ignore) student number
            token = strtok(line, '\t'); // get score
            float score = atof(token); // parse int
            sum += score;
        }

        float average = sum / numStudents;
        fputs(fileNames[i] + "\t" + std::to_string(average), averageFile);
        fclose(file);
    }

    fclose(averageFile);

    return 0;
}