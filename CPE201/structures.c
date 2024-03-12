#include<stdio.h>

typedef struct{

    char *name;
    int age;

}Member;



int main(void){

    Member user_1;

    user_1.name = "Daniel";
    user_1.age = 18;

    printf("Hi, I am %s and I am %i years old", user_1.name, user_1.age);
}
