/*  Author: He, Jasper Jia Jie
    Student Number: 66909672
    Lab Section: L1H
    Date: 2023-09-27
    Purpose: Lab1 (Fundamentals)
    UBC Email Address: jhe2027@student.ubc.ca
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( void ){
    //  user will input:
    double time;

    //  program will output:
    double position;

    //  prompt for input:
    printf( "Please enter the time t in seconds: " );
    scanf( "%lf", &time );

    //  now that we have the inputted time t, we can perform the calculation for position x as given by the formula:
    position = ( ( 5.0 * sqrt( time ) * sin( 7.0 * time ) ) / ( 2.0 ) ) + ( ( pow( ( cos( 3.0 * time ) ), ( 2.0 ) ) ) / ( 5.0 ) ) + ( pow( ( ( 3.0 ) / ( 5.0 ) ), ( time ) ) );

    //  program outputs calculated position, to 3 decimal places:
    printf( "The position of the particle x in metres at your given time t is: %.3f", position );
    
    //  end the method
    return 0;
}