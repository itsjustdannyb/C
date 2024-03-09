#include<stdio.h>
    int main(){

        printf("1. Add(+) \n2. Subtract(-) \n3. Divide(/) \n4. Multiply(*) \n");
        char x;
        printf("What do you want to do? \n");
        scanf("%c",&x);

        int num1;
        printf("Enter a first number: ");
        scanf("%d",&num1);
        int num2;
        printf("Enter the second number: ");
        scanf("%d",&num2);
        if(x == '+'){
            printf("%d",num1+num2);
        }
        else if (x=='-'){
            printf("%d",num1-num2);
        }
        else if (x=='/'){
            printf("%d",num1/num2);
        }
        else {
            printf("%d",num1*num2);
        }
return 0;
    }
