#include <stdlib.h>
#include <stdio.h>

// double function(int, double);

void printChars(int numChars, char printChar);

void drawRamp(int numRows);

int main(void){

    drawRamp(5);

}

void printChars(int numChars, char printChar){

    for (int index = 0; index < numChars; index++){

        printf("%c", printChar);

    }

    printf("\n");

}

void drawRamp(int numRows){

    int its = 1;

    for(int index = 0; index < numRows; index++){

        for(int count = 0; count < (numRows - index - 1); count++){

            printf(" ");

        }
        printChars(its, '*');

        its += 2;

    }

}


// double function(int N, double x){

// 	double answer = 1;

// 	for(int index = 1; index <= N; index++){

// 		double temp = x;

// 		for(int count = 1; count < index; count++){

// 			temp *= x;
	
// 		}

// 		answer += temp;

// 	}

// 	return answer;

// }