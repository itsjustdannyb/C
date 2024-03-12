#include<stdio.h>

int main(void)
{
    int prev_term = 1;

    printf("[0, %d ", prev_term);
    int sum = 0 + prev_term;

    for(int i = 0; i < 15; i++){
        printf(", %d", sum);
        sum = sum + prev_term;
        prev_term = sum - prev_term;
    }
    printf("] \n");

}
