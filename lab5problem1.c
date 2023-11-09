/*
Author: He, Jasper Jia Jie
Student Number: 66909672
Lab Section: L1H
UBC Email: jhe2027@student.ubc.ca
Date: 2023-10-30
Purpose: To return the sum of the squares of a given range of elements in an integer array. (Lab 5 Q1)
*/

//Include the standard headers:
#include <stdlib.h>
#include <stdio.h>

//Declare function prototype:
int sumSquareRange(int data[], int size, int start, int end);

//Main function to test sumSquareRange():
int main(void){

    //Test arrays for different cases:
    int test1[5] = {1, 2, 3, 4 , 5};
    int test2[5] = {(-1), (-2), (-5), (-10)};
    int test3[7] = {1, 3, 6, 8, (-200), 31, 31};

    //Printing function output to verify:
    printf("%i\n", sumSquareRange(test1, 5, 0, 3));
    printf("%i\n", sumSquareRange(test2, 5, 1, 4));
    printf("%i", sumSquareRange(test3, 7, 0, 3));

    //Signalling compiler to exit:
    return 0;

}

//Function as specified in question:
int sumSquareRange(int data[], int size, int start, int end){
    
    //Optionally check that start and end are in range within size:
    if(start < 0 || end > (size - 1)){
       
        //Print an error message:
        printf("Error! Start and End indices are not in range!");
     
       //Standard error return format:
        return -1;

    }

    //Declare output variable:
    int sum = 0;

    //Iterate across array from start to end:
    for (int index = start; index <= end; index++){
        
        //Add to sum the square of the current element:
        sum += (data[index] * data[index]);
    
    }

    //Output the result:
    return sum;

}