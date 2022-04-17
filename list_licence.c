#include "lib_lm.h"

void LIST_OF_LICENCE(){
    FILE* LICENCE_BILAL;
    
    LICENCE_BILAL = fopen("licence.bilal", "r");
    if(LICENCE_BILAL == NULL){
        system("color 4");
        FILE_OPEN_ERROR;
        exit(1);
    }

    else{
        system("color a");
        char CURRENT_CHAR;
        while((CURRENT_CHAR = fgetc(LICENCE_BILAL)) != EOF){
            printf("%c", CURRENT_CHAR);
        }

        for(int i = 0; i != 2; i++){
            printf("\n");
        }
        exit(0);
    }
}