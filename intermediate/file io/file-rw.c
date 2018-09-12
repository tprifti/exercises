#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int len_max = 128;
    unsigned int current_size = 0;

    FILE *file = fopen("file.txt", "w");

    char *input = malloc(len_max);
    current_size = len_max;

    printf("Enter input, press enter to finish:\n");

    if(file == NULL){
        printf("Couldn't open file");
        exit(1);
    }

    if(input != NULL){
		int c = EOF;
		unsigned int i =0;
		//in case of enter, return input
		while (( c = getchar() ) != '\n' && c != EOF){
			input[i++]=(char)c;

			if(i == current_size){
				current_size = i+len_max;
				input = realloc(input, current_size);
			}
		}

		input[i] = '\0';

		fprintf(file, "%s", input);

        free(input);
        fclose(file);
		input = NULL;

    }
    return 0;
}
