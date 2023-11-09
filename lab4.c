/*
Author: He, Jasper Jia Jie
Student Number: 66909672
Lab Section: L1H
UBC Email: jhe2027@student.ubc.ca
Date: 2023-10-25
Purpose: [Lab4] To print a picture of various triangles of characters '#' and '|'.

*/

#include <stdio.h>
#include <stdlib.h>

//Declare prototypes:
void printChars(int, char);
void printTri(int, char);
void printPic(int);

int main(void){

    //Various testing:
    printPic(3);
    printPic(0);
    printPic(10);

    //Exit the program:
    return 0;
}

/*
 * Prints the given character the given number of times
 * on the screen.
 * Parameter: nChars - the number of characters to print
 * Parameter: printChar - the character to print
 */
void printChars(int nChars, char printChar)
{
    int countChars = 0;

    while (countChars < nChars)
    {
        printf("%c", printChar);
        countChars++;
    }
}

/*
Prints a given character in a triangle of given size.
Parameter: size - the size of the triangle
Parameter: symb - the character to print
*/
void printTri(int size, char symb){

    //For loop to iterate and print over size:
    for(int count = 0; count < size; count++){
        printChars((count + 1), symb);
        printf("\n");
    }
}

/*
Prints a given number of triangles of increasing size alternating between the characters '#' and '|'.
Parameter: size - the number of triangles
*/
void printPic(int size){

    //For loop to iterate and print each triangle:
    for(int count = 0; count < size; count++){

        //Checking to see which character to print:
        if (count % 2 == 0){
            printTri((count + 1), '#');
        }
        else{
            printTri((count + 1), '|');
        }
    }
}