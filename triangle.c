//FYI this code is messed up but it works and I can't be bothered to make it better lol

#include <stdlib.h>
#include <stdio.h>


int main(void){
    int size;
    int periods;
    int num = 1;
    int rows;
    int count;

    scanf("%d\n", &size);

    while (size < 1 || size > 9){
        printf("Error: enter an integer inclusively between 1 and 9: ");
        scanf("%d\n", &size);
    }

    rows = size;

    while (rows > 0){
        count = size;
        num = 1;
        while (count > 0){

            if (size > 1 && count == size){
                periods = rows - 1;
            }

            while (periods > 0){
                printf(".");
                periods--;
                count--;
            }
            if(count > 0){
            printf("%i", num);
            num++;}

            count--;
        }
        printf("\n");
        rows--;
    }
    printf("\n");

}