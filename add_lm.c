#include "lib_lm.h"

int ID_LICENCE = 0; //number max of the licence left
char BACK_N = '\n';
char CROCHET_OPEN = '[';
char CROCHET_CLOSE = ']';
char SPACE = ' ';

//char CHUNKS[128]; TO INCREMENT THE ID LICENCE IN EVERY ENTRIES;

void ADD_LICENCE(char* THE_LICENCE){
    struct LICENCE_MANAGER L;
    
    L.ID = ID_LICENCE;
    L.BUYER = malloc(sizeof(char) * 20);
    if(L.BUYER == NULL){
        system("color 4");
        ALLOC_ERROR;
        free(L.BUYER);
        exit(1);
    }

    L.BUYER = THE_LICENCE;

    FILE* LICENCE_BILAL;
    if(LICENCE_BILAL == NULL){
        system("color 4");
        FILE_OPEN_ERROR;
        fclose(LICENCE_BILAL);
        free(LICENCE_BILAL);
        free(L.BUYER);
        exit(1);
    }

    else{
        LICENCE_BILAL = fopen("licence.bilal", "a+");
        fwrite(&BACK_N, sizeof(char), 1, LICENCE_BILAL); 

        fwrite(&CROCHET_OPEN, sizeof(char), 1, LICENCE_BILAL); 

        //if(/*the last line*/ == L.ID){
            //L.ID++;
        //}

        fprintf(LICENCE_BILAL, "%d", L.ID);

        fwrite(&CROCHET_CLOSE, sizeof(char), 1, LICENCE_BILAL); 
        fwrite(&SPACE, sizeof(char), 1, LICENCE_BILAL); 
        
        fwrite(L.BUYER, sizeof(char), 5, LICENCE_BILAL);
        
        fclose(LICENCE_BILAL);
        system("color a");
        printf("\n\nThe licence [%s] as been save correctly at licence.bilal !\n\n\n", L.BUYER);

        //DUPLI_CHECK();
    }

    L.ID++;
    free(LICENCE_BILAL);
    free(L.BUYER);
}