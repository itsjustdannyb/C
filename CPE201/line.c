// Equation of line we did in class on 27/11/2023

#include<stdio.h>

int main(void){

    char name[25];
    printf("What's your name: ");
    scanf("%s", &name);

    printf("Hello, %s \nLet me help you calculate the line equation 'y = m*x + c' \n", name);
    // y = m*x + c
    float y;
    float m;
    float x;
    const float c;

    printf("\n"); //whitespace

    printf("Enter the gradient(m): ");
    scanf("%f", &m);

    printf("Enter the x value: ");
    scanf("%f", &x);

    printf("Enter the value of the intercept(c): ");
    scanf("%f", &c);

    y = (m * x) + c;

    printf("The value for y is %.3f", y);

}
