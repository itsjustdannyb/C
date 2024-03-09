#include<stdio.h>
#include<math.h>


int main(void){

    // volume: 4/3 * pi * r^3
    // area: 4 * pi * r^2
    const float pi = 3.142;

    float radius, area, volume;
    printf("What's the radius of the sphere: ");
    scanf("%f", &radius);


    area = (4 * pi * pow(radius, 2));
    printf("The Area of the Sphere is %.2f \n", area);

    volume = (4/3 * pi * pow(radius, 3));
    printf("The Volume of the Sphere is %.2f \n", volume);

    return 0;

}
