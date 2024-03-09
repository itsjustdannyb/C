#include<stdio.h>


void dec_to_bin(int number);

int main(void){

    printf("---Decimal to Binary converter--- \n");
    int number;
    printf("Enter a base 10 number: ");
    scanf("%d", &number);

    dec_to_bin(number);
}


void dec_to_bin(int number){
    int count = 0;
    int result[50];

    do{
      result[count] = number % 2;
      number /= 2;
      count++;
    }
    while(number > 0);

    printf("Binary: ");
    for(int j = 1; j <= count; j++){
        printf("%d ", result[count - j]);
    }
    printf("\n");
}

