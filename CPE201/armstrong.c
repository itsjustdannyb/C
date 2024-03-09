#include<stdio.h>
#include<math.h>

int main(void){

    int number, length, empty;
    printf("Look for Armstrong Numbers between x and y\n");

    int x, y;
    printf("x: ");
    scanf("%d", &x);

    printf("y: ");
    scanf("%d", &y);



    while(x <= y){
        number = x;

        // number of digits in a number
        length = log10(number) + 1;

        // default raised_sum
        int raised_sum = 0;

        // To select each digit in the number
        while(number > 0){
            // the remainder of this division is the number we're working with first
            // so we're sort of working backwards (BAMS)
            int digit = number % 10;
            number = number / 10;

            raised_sum += pow(digit, length);
        }

        if(raised_sum == x){
            printf("%d ", x);
            empty = 0;
        }

        x = x + 1;
    }

    if(empty != 0){
        printf("There are no Armstrong numbers in the range provided \n");
    }

    return 0;

}
