#include<stdio.h>
#include<math.h>

int main(void)
{
    float x1, x2, y1, y2, distance;
    printf("Enter X1: ");
    scanf("%f", &x1);

    printf("Enter X2: ");
    scanf("%f", &x2);

    printf("Enter Y1: ");
    scanf("%f", &y1);

    printf("Enter Y2: ");
    scanf("%f", &y2);

    distance = sqrt((pow((x2 - x1), 2)) + (pow((y2 - y1), 2)));
    printf("The distance between the points is %.2f cm", distance);

}
