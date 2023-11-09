#include <stdlib.h>
#include <stdio.h>

void rgb2grey( int R[], int G[], int B[], int size);
void filterByChannel(int R[], int G[], int B[], int size, int colour);
void negative(int R[], int G[], int B[], int size);

int main(void){
    return 0;
}

void rgb2grey( int R[], int G[], int B[], int size){
    for (int index = 0; index < size; index++){
        if (R[index] >= G[index] && R[index] >= B[index]){
            G[index] = R[index];
            B[index] = R[index];
        }
        else if (G[index] >= R[index] && G[index] >= B[index]){
            R[index] = G[index];
            B[index] = G[index];
        }
        else{
            R[index] = B[index];
            G[index] = B[index];
        }
    }
}

void filterByChannel(int R[], int G[], int B[], int size, int colour){
    if (colour == 2){
        for (int index = 0; index < size; index++){
            G[index] = 0;
            B[index] = 0;
        }
    }

    else if (colour == 1){
        for (int index = 0; index < size; index++){
            R[index] = 0;
            B[index] = 0;
        }
    }
    
    else{
        for (int index = 0; index < size; index++){
            R[index] = 0;
            G[index] = 0;
        }
    }

}

void negative(int R[], int G[], int B[], int size){

    for (int index = 0; index < size; index++){
        int tempR = 255 - R[index];
        int tempG = 255 - G[index];
        int tempB = 255 - B[index];

        R[index] = tempR;
        G[index] = tempG;
        B[index] = tempB;
    }
}