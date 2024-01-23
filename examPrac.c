#include <stdlib.h>
#include <stdio.h>

// double function(int, double);

void printChars(int numChars, char printChar);

void drawRamp(int numRows);

int main(void){

    char str1[] = "hi2";
    char str2[] = "hi1";
    int index;
    for (index = 0; str1[index] != '\0'; ++index){
        if (str1[index] != str2[index]){
            printf("no");
            break;
        }
    }

    if (str2[index] == '\0')
    printf("yes");

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