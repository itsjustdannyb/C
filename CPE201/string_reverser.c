#include<stdio.h>
#include<string.h>

int main(void){

    char reg_num[24];

    printf("Enter your Registration Number: ");
    scanf("%s", &reg_num);

    // to calculate the length of the string input
    int length = strlen(reg_num);

    for(int i = 1; i <= length; i++){
        printf("%c", reg_num[length - i]);
    }
    printf("\n");

    return 0;

//    char *s = "Daniel";
//    int length = strlen(s);
//    printf("%p \n", &s);
//    printf("%d", length);



}
