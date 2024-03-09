#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    for (int i=2;i<num;i++){
        if(num%i!=0){
            printf("it is  a prime number");
        }
        else{
            printf("it is not prime number");
        }
        return 0;
    }




}
