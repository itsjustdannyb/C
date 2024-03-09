#include <stdio.h>
#include <stdlib.h>

int main(void){

    int count = 15;
    int* array = malloc(sizeof(int) * count);

    count++;
    int* array2 = realloc(array, sizeof(int) * count);
    if(array2 == NULL){
        printf("Memory allocation failed");
    }
    else{
        array = array2;
    }

    for(int i = 0; i <= count; i++){
        array[i] = i;
    }

    for(int i = 0; i <= count; i++){
        printf("%i ", array[i]);
    }

    printf("\n");
    free(array);

    return 0;

}
