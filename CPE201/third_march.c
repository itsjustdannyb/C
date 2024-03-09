#include<stdio.h>
#include<string.h>
int main(){

    char x[24];
    char y[24];
    printf("Enter the palindrome: ");
    scanf("%s",&x);
    int length=strlen(x);


    for(int i=0; i<length; i++){
        y[i] = x[length-(i+1)];
    }

    int count = 0;
    for(int j = 0; j < length; j++){
        if(x[j] != y[j]){
            printf("It is not a palindrome \n");
            break;
        }
        else{
            count++;
        }
    }
    if(count == length){
        printf("It is a palindrome \n");
    }
    return 0;
}
