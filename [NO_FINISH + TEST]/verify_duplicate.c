#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "lib_lm.h"

void DUPLI_CHECK(char* THE_LICENCE){
    FILE* LICENCE_BILAL;
    
    LICENCE_BILAL = fopen("licence.bilal", "r");
    if(LICENCE_BILAL == NULL){
        system("color 4");
        FILE_OPEN_ERROR;
        exit(1);
    }

    else{
        system("color a");
        char CURRENT_CHAR; int I = 0;
        char* LICENCE_CONTAINER = malloc(sizeof(char) * 15);

        // while((CURRENT_CHAR = fgetc(LICENCE_BILAL)) != EOF){
        //     while(CURRENT_CHAR != '\n'){
        //         *(LICENCE_CONTAINER + I) == CURRENT_CHAR;
        //         I++;
        //     }
        //     printf("CHECK\n");
        // }

        // for(I = 0; *(LICENCE_CONTAINER + I) != '\0'; I++){
        //     printf("%s, ", *(LICENCE_CONTAINER + I));
        // }

        for(int i = 0; i != 2; i++){
            printf("\n");
        }

        exit(0);
    }
}