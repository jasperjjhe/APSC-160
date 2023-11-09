/*
Author: He, Jasper Jia Jie
Student Number: 66909672
Lab Section: L1H
UBC Email: jhe2027@student.ubc.ca
Date: 2023-10-30
Purpose: Return the double-precision mean squared error given two double-precision input arrays and their equal size, as specified in the question. (Lab 5 Q2)
*/

//Include the standard headers:
#include <stdlib.h>
#include <stdio.h>

//Include a math header to make exponents easier (as hinted at in the question):
#include <math.h>

//Declare function prototype:
double mse(double arrayA[], double arrayB[], int size);

//Main function to test sumSquareRange():
int main(void){

    //Test arrays for different cases:
    double test1[5] = {1.1, 2.2, 3.3, 4.4 , 5.5};
    double test2[5] = {(-1), (-2), (-5), (-10)};

    double test3[4] = {1.0, 2.0, (-1.0), 0.0};
    double test4[4] = {0.5, 1.0, 1.0, 1.0};

    //Printing function outputs to verify:
    printf("%lf\n", mse(test1, test2, 5));
    printf("%lf\n", mse(test2, test1, 5));

    printf("%lf\n", mse(test3, test4, 4));
    printf("%lf", mse(test4, test3, 4));
    
    //Signalling compiler to exit:
    return 0;

}

//Function as specified in question:
double mse(double arrayA[], double arrayB[], int size){

    //Define a double-precision sum variable:
    double sum = 0.0;

    //Iterate over both arrays that are assumed to be the same size according to the question:
    for (int index = 0; index < size; index++){
       
        //Add to sum the square of the current arrayA element subtracted from the current arrayB element, as specified in the question:
        sum += pow((arrayB[index] - arrayA[index]), 2);
    
    }

    //Return the sum divided by the number of elements in each array, as specified in the question, casted as a double to maintain double-precision:
    return (sum / ((double) size));

}