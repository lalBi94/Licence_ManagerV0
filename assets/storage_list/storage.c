#include <stdio.h>
#include <stdlib.h>

typedef enum{
    false,
    true,
} Boolean;

typedef struct Storage{
    int data;
    struct Storage* next;
}Storage, *liste;

Boolean is_null(void){
    return NULL;
} 

int main(int argc, char* argv[]){
    struct Storage Storage;
    
}