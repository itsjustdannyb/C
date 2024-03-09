#include<stdio.h>
#include<math.h>


int main(void){

    float bmi[5];
    float height[5] = {2.2, 3.21, 6.54, 3.43, 1.5};
    float weight[5] = {5.34, 6.3, 8.1, 6.9, 1.2};

    for(int i = 0; i < 5; i++){
        bmi[i] = weight[i] / (pow(height[i],2));
        printf("THE BMI FOR %d is %.5f \n", i, bmi[i]);

    }

}
