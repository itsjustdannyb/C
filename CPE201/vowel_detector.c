#include<stdio.h>

int main(void){

    char word_1[24];
    char word_2[24];
    printf("Enter the first string: ");
    fgets(word_1, sizeof(word_1), stdin);
    printf("Enter the second string: ");
    fgets(word_2, sizeof(word_2), stdin);

    for(int i = 0; i < 24; i++){
        if(word_1[i] == word_2[i]){
            if(word_1[i] == '\0' && word_2[i] == '\0'){
                printf("The two strings are similar");
            }
            else{
                printf("The two strings are not similar");
            }
        }

    }


}
