#include<stdio.h>

int main(void){

    // array of numbers
    int nums[] = {1,2,3,4,5};
    // pointer to the nums array
    int *nums_ptr = &nums;

    // initialize the summation
    int sum = 0;
    // loop over each number in nums
    for(int i = 0; i < 6; i++){
        sum += *(nums_ptr + i);
    }

    printf("The sum of numbers in the array is %d \n", sum);


}
