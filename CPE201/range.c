#include<stdio.h>
#include<math.h>

int main(void){

    int number, length;
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
            int digit = number % 10;
            number = number / 10;
            // the remainder of this division is the number we're working with first
            // so we're sort of working backwards (BAMS)

            raised_sum += pow(digit, length);
        }

        if(raised_sum == x){
            printf("%d ", x);
        }

        x = x + 1;
    }

    printf("\n");
    return 0;

}
