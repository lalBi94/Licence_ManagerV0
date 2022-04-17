#include <stdio.h>
#include <windows.h>
#include "lib_lm.h"

#define BUFFER 1024

void DELETE_LICENCE(char* THE_LICENCE){
    FILE* LICENCE_BILAL;

    printf("CHECK DELETE : TEST = %s ALL = %s\n\n", *(THE_LICENCE + 0), *THE_LICENCE);

    if(LICENCE_BILAL == NULL){
        system("color 4");
        FILE_OPEN_ERROR;
        fclose(LICENCE_BILAL);
        free(LICENCE_BILAL);
        exit(1);
    }

    // LICENCE_BILAL = fopen("licence.bilal", "w");

    // char* line = malloc(BUFFER);

    // while(fgets(line, BUFFER, LICENCE_BILAL) != NULL){
    //     if (strstr(line , THE_LICENCE) != NULL){
    //      printf("%s",line);
    //   }
    // }
}