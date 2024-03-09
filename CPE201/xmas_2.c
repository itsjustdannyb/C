#include<stdio.h>
#include<math.h>

// custom function prototypes
double cube_rooter(float num_1);

int main(void){

    float num;
    printf("What's the number: ");
    scanf("%f", &num);

    double cube_root = cube_rooter(num);
    printf("The cube root of %f is: %.4lf", num, cube_root);

    return 0;

}

// calculate cube root
double cube_rooter(float num_1){

    double c_root = cbrt(num_1);
    return c_root;9
}
