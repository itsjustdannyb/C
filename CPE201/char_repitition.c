#include<stdio.h>
#include<string.h>

int main(void){

    char text[26];
    printf("Enter a text: ");
    fgets(text, sizeof(text), stdin);

    // length of string
    int length = strlen(text) - 1;
    printf("This word is %i characters long\n", length);

    // collect sum of repeating characters
    int sum = 0; // every character looped over will occur at least once

    for(int i = 0; i < length; i++){

        // reset j to zero on each character iteration
        int j = 0;
        while(j <= length){
            if(text[i] == text[j]){
//                printf("%c -- %c \n",text[i], text[j]);
                sum++;
            }
            j++;
        }
        printf("%c --> %d \n", text[i], sum);
        printf("\n");
        // reset sum
        sum = 0;

    }


}
