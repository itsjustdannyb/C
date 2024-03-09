#include<stdio.h>


int main(void){

    printf("-----Celsius to Fahrenheit Converter----- \n");

    float cels;
    printf("Enter the temperature in degree celsius: ");
    scanf("%f", &cels);

    float fahr = ((9 * cels) / 5) + 32;
    printf("The Temperature from %.1f degree Celsius is %.2f degree Fahrenheit \n", cels, fahr);


    return 0;
}
