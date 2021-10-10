#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    const int NUM_FILES = 3;
    char* fileNames[] = {
        "bangla.txt",
        "english.txt",
        "math.txt"
    };
    FILE* averageFile = fopen("average.txt", "w");

    for (int i = 0; i < NUM_FILES; i++) {
        size_t lineLength = 0;
        FILE* file = fopen(fileNames[i], "r");
        float sum = 0;
        char* line = NULL;
        int numStudents = 0;

        while (getline(&line, &lineLength, file) != -1) {
            numStudents++;

            char* token = strtok(line, "\t"); // get (and ignore) student number
            token = strtok(line, "\t"); // get score
            float score = atof(token); // parse int
            sum += score;
        }

        float average = sum / numStudents;
        char averageString[50];
        sprintf(averageString, "%g", average);
        fputs(fileNames[i] + "\t" + averageString, averageFile);
        fclose(file);
    }

    fclose(averageFile);

    return 0;
}