#include<stdio.h>

#define MAX_LIMIT 50


int main(void){

    int nums[] = {};
    for(int i = 0; i < MAX_LIMIT; i++){
        nums[i] = i;
//        printf("%d\n", nums[i]);
    }

    for(int j = 0; j < MAX_LIMIT; j++){
        printf("%d  ", nums[j]);
    }


//    for(int i = 1; i <= MAX_LIMIT; i++){
//
//        printf("%d\t", nums[MAX_LIMIT - i]);
//
//    }
//

}















//#include<stdio.h>
//#include<math.h>
////Declaring the function calculate area
//float calculate_area(float r);
//
////Calling the function
//int main(){
//    float r;
//    printf("Enter the radius:\n");
//    scanf("%f", &r);
//    float result = calculate_area(r);
//    printf("The answer is %.2f\n", result);
//    return 0;
//}
////Defining the function calculate area
//float calculate_area(float r){
//    return 4 * 3.14 * pow(r, 2);
//
//}



