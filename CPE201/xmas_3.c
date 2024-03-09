#include<stdio.h>

// collect user input
// input squared

int main(void){

    float length;
    printf("What's the length of the square's side: ");
    scanf("%f", &length);

    // square the length
    float area = length * length;
    printf("The area is: %.2f", area);

    return 0;
}
