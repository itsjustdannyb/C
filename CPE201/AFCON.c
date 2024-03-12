// 24 countries
// 6 groups -> A B C D E F
// Four Countries per group

#include<stdio.h>

int main(void){

    int countries[24] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
    // a 2D Array of the 6 groups with 4 element
    int groups[6][4];

    int count = 0;
    // iterate over groups
    for(int j = 0; j < 6; j++){
        // assign characters to each group
        for(int k = 0; k < 4; k++){
//            for(int i = 0; i < 1; i++){
//                groups[j][k] = countries[i];
//                count++;
//
//                 // go to next numbers...
//                if(count == 4){
//                    count = 0;
//                    break;
//
//                }
//
//            }
//            printf("%d \n", count);
            int i = 0;
            do{
                groups[j][k] = countries[i];
                count++;
                i++;

                if(count == 3){
                    break;
                }
            }
            while(i < 24)

        }
    }


    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 4; j++){
            printf("Array %d -> %d \n", (i+1), groups[i][j]);
        }
    }
}

