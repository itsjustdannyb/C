#include<stdio.h>
#include<string.h>

// prototypes
void upper(char words[100]);


int main(void){

    // check for validity
    char text[100];
    printf("Enter any text: ");
    fgets(text, sizeof(text), stdin);

    // invoke the "upper" function
    upper(text);

    return 0;
}

void upper(char words[100]){
    // no of characters in the input
    int length = strlen(words);
    for(int i = 0; i < length - 1; i++){

        if(words[i] == ' '){
            printf(" ");
        }
        // do conversion when ASCII is in small letters
        else if(words[i] >= 97 && words[i] <= 122){
            printf("%c", words[i] - 32);
        }
        else{
            printf("%c", words[i]);
        }
    }

}
