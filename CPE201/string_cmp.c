#include<stdio.h>

// prototypes
int length(char word[24]);

int main(void){
    char text[24];
    char text1[24];

    printf("Enter the first word: ");
    fgets(text, sizeof(text), stdin);
    printf("Enter the second word: ");
    fgets(text1, sizeof(text1), stdin);

    // length of the two strings
    int text_len = length(text);
    int text1_len = length(text1);

    if(text_len == text1_len){
        for(int i = 0; i < text_len; i++){
            if(text[i] == text1[i]){
                if(i == text_len - 1){
                    printf("The two strings are equal \n");
                }
            }
            else{
                printf("The strings are not equal \n");
                break;
            }
        }
    }
    else{
        printf("The strings are not equal \n");
    }
}

// length of texts
int length(char word[24]){
    int count = 0;
    for(int i = 0; i <= 24; i++){
        if(word[i] != '\0'){
            count += 1;
        }
        else{
            break;
        }
    }
    return count - 1;
}
