#include<stdio.h>


int main(void){

    int num_1, num_2, num_3;


    printf("Enter the 3 numbers you'd like to compare: \n");
    scanf("%d %d %d", &num_1, &num_2, &num_3);

    if(num_1 > num_2){
        if(num_1 > num_3){
            printf("The largest number is %i \n", num_1);5
        }
    }
    else if(num_2 > num_3){
        printf("The largest number is %i \n", num_2);
    }
    else{
        printf("The largest number is %i \n", &num_3);
    }

    return 0;

}
