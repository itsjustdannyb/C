#include<stdio.h>

int main(void){

    int height;
    printf("Enter the Height of the triangle: ");
    scanf("%d", &height);

    for(int i = 1; i <= height; i++){
        for(int j = 0; j < i; j++){
            printf("X");
        }
        printf("\n");
    }

}
