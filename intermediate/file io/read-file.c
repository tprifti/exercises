#include <stdio.h>
#include <stdlib.h>


int main(){
    struct student {
        char emri[20];
        char mbiemri[20];
        int notat[5];
    };

    // int foo;


    FILE* data = fopen("data.txt", "r");

    //char emri[50];
    int size;
    int sindex = 0;
    int i = 0;
    if(data == NULL){
        printf("Couldn't open file");
        exit(1);
    }

    printf("reading file...\n");

    fscanf(data, "%d", &size);
    struct student students[size];
    while(fscanf(data, "%s %s", students[sindex].emri, students[sindex].mbiemri) == 2) {
        while(fscanf(data, "%d",&students[sindex].notat[i++]) == 1){}

        printf("Emri: %s \n", students[sindex].emri);
        printf("Mbiemri: %s\n", students[sindex].mbiemri);
        for(int m=0; m<5; m++){
            printf("Nota: %d\n", students[sindex].notat[m]);
        }
        printf("\n --------NEW STUDENT ---------- \n");
        sindex++;
        i=0;
    }

    fclose(data);

    return 0;
}