#include<stdio.h>

int main(void){

    int num;
    printf("Enter a Number: ");
    scanf("%i", &num);


    // stores sum of sequence
    float sum = 0;
    float collatz = 0;
    int count = 0;
    // stop looping
    int stop = 1;

    while(stop == 1){
        // check for parity
        if(((num - 1) % 2) == 0){
            printf("%i \n", num);
            collatz = (num - 1) / 2;
            sum = sum + collatz;
            printf("sum: %.5f \n", sum);
            if(sum == 1.0){
                printf("The Sequence has converged at 1");
                printf("It took %d iterations\n", count);
                break;
            }
            count++;
            num++;
        }
        else{
            collatz = (3 * (num -1)) + 1;
            sum = sum + collatz;
            printf("sum: %.5f \n", sum);
            if(sum == 1.0){
                printf("The Sequence has converged at 1");
                printf("It took %d iterations\n", count);
                break;
            }
            count ++;
            num++;
        }
    }


}
