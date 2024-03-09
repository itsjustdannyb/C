#include <stdio.h>
#include <stdlib.h>

int main(void){

    int size = 10;
    int* array = malloc(sizeof(int) * 10);

    // generate random numbers
    for(int i = 0; i < size; i++){
        array[i] = rand()%5 + 1;
    }

    for(int i = 0; i < size; i++){
        if(array[i] == array[])
        printf("%d ", array[i]);
    }

    free(array);
}
