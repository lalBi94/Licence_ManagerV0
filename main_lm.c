#include "lib_lm.h"

static int tmp = 0;

/*The all of the function function is explain in lib_lm.h ! */

int main(int argc, char* argv[]){
    SetConsoleTitle("Licence Manager v.0 - Bilaal#7175");
    system("color 0f");
    int i = 0, j = 0;
    
    while(argv[i][j] != '\0'){ 
        i++; j++;
    }

    printf("Check : %d\n\n", j);

    if(argc < 2){
        system("color 4");
        WHEN_ADDING_LICENCE_IS_INCORRECT;
        exit(1);
    }

    if(*argv[1] == 'a' && argc == 3){
        ADD_LICENCE(argv[2]);
    }

    else if(*argv[1] == 'l' && argc == 2){
        LIST_OF_LICENCE();
    }

    else if(*argv[1] == 'r' && argc == 3){
        //DELETE_LICENCE(argv[2]);
    }

    else if(*argv[1] == 'm' && argc == 4){
        //MODIFY_LICENCE();
    }

    else if(*argv[1] == 't' && argc == 3){
        IN_TEST(argv[2]); //DEV TOOLS
    }

    exit(0);
}