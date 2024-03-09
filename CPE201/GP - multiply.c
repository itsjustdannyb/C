#include<stdio.h>
#include<math.h>
int main(){
    int x1;
    printf("Enter the number for x1: ");
    scanf("%d",&x1);
    int x2;
    printf("Enter the number for x2: ");
    scanf ("%d",&x2);
    int y1;
    printf("Enter the number for y1: ");
    scanf ("%d",&y1);
    int y2;
    printf("Enter the number for y2: ");
    scanf ("%d",&y2);
    float Distance=sqrt(pow(x2-x1,2)+ pow(y2-y1,2));
    printf ("%.3f",Distance);
}
