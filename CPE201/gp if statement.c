#include<stdio.h>
int main (){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num%2==0){
        printf("Green");
    }
    else if (num%2==1){
        printf("Yellow");
    }
}
