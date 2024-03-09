#include<stdio.h>

// collect user inputs
// run if statements to see which is biggest

int main(void){
    float num_1;
    printf("Enter the first number: ");
    scanf("%f", &num_1);

    float num_2;
    printf("Enter the second number: ");
    scanf("%f", &num_2);

    float num_3;
    printf("Enter the third number: ");
    scanf("%f", &num_3);

    if(num_1 > num_2){
        if(num_1 > num_3){
            printf("The biggest number is %.2f", num_1);
        }
        else{
            printf("The biggest number is %.2f", num_3);
        }
    }
    else if(num_2 > num_3) {
        printf("The biggest number is %.2f", num_2);
    }
    else{
        printf("The largest number is %.2f", num_3);
    }

    return 0;
}

