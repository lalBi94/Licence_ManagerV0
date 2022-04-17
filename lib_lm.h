#ifndef __LIB_LM_H__
#define __LIB_LM_H__

#define ALLOC_ERROR printf("Error with the [L.BUYER]'s malloc(), please retry or contact Bilaal#7175 on discord :)\n\n")
#define FILE_OPEN_ERROR printf("\n\nError, please contact Bilaal#7175 on discord :)\n\n")
#define LICENCE_MAX_LENGTH 5
#define WHEN_ADDING_LICENCE_IS_INCORRECT printf("\n\nUsage: licenceManage <option (a | r | m | l)>\n\n")
#define PAUSE_END printf("Press any key to quit...")

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h>
struct LICENCE_MANAGER{
    int ID;
    char* BUYER;
};

struct CURRENT_STOCK{
    char* CURRENT_SENTENCE;
};

int main(int argc, char* argv[]); //main | TAKE a, l, r, m in arguments. | licenceManage <option (a | r | m | l)>
void LIST_OF_LICENCE(); //list the licence in terminal |
void ADD_LICENCE(char* THE_LICENCE); //adding licence to licence.bilal | TAKE THE LICENCE TO ADD (argv[2]) IN PARAMETER 
int IN_TEST();
//void DUPLI_CHECK(char* THE_LICENCE); //check if licence/id already exit; | TAKE THE LICENCE ID AND THE LICENCE ALREADY EXIT IN LICENCE_BILAL
//void DELETE_LICENCE(char* THE_LICENCE); //!!!! TO FINISH !!!!
//void MODIFI_LICENCE(char* THE_LICENCE, char* THE_NEW_LICENCE);

#endif