//This is a C program that read a image file as binary and write same content of it in a new image file.
#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp_in, *fp_out;
	char *input_file = "picture.jpg";
	char *output_file = "picture2.jpg";
	int ch;

	fp_in = fopen(input_file, "rb");
	if (fp_in == NULL) {
		perror("Oops! File opening failed");
		return EXIT_FAILURE;
	}

	fp_out = fopen(output_file, "wb");

	while(1) {
		ch = fgetc(fp_in);
		if (ch == EOF) {
			break;
		}
		fputc(ch, fp_out);
	}

	fclose(fp_in);
	fclose(fp_out);

	return 0;
}