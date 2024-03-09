#include<stdio.h>

int main(void){

    printf("-----Perimeter of a Circle-ator----- \n");
    const float pi = 3.142;
    float radius;

    // collect user input
    printf("Enter the value for the radius: ");
    scanf("%f", &radius);

    float perimeter = 2 * pi * radius;
    printf("The perimeter of a circle of radius %.2f is %.3f \n", radius, perimeter);

    return 0;

}
