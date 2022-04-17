#include "lib_lm.h"

#define MAX_LIMIT_LICENCE 10
#define BUFFER_SIZE_CHAIN 255

int IN_TEST(char* THE_LICENCE){ //DEV TOOLS
    printf("Welcome in dev. interface !\n");
    printf("In here, you want to delete the licence [%s] !\n\n", THE_LICENCE);

    FILE* LICENCE_BILAL;
    LICENCE_BILAL = fopen("licence.bilal", "r+");
    char CURRENT = '0';
    if(LICENCE_BILAL == NULL){
        system("color 4");
        FILE_OPEN_ERROR;
        fclose(LICENCE_BILAL);
        exit(1);
    }

    char* CHAIN_TO_SEARCH = malloc(sizeof(char) * MAX_LIMIT_LICENCE); //THE_LICENCE
    int I = 0;
    char CURRENT_CHAR = ' ';

    while((CURRENT_CHAR = fgetc(LICENCE_BILAL)) != EOF){
            printf("%c", CURRENT_CHAR);
        }

    fclose(LICENCE_BILAL);
    exit(0);
}