/*  Author: He, Jasper Jia Jie
    Student Number: 66909672
    Lab Section: L1H
    Date: 2023-10-06
    Purpose: Lab2: Control (Branching)
    UBC Email Address: jhe2027@student.ubc.ca
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    //Initializing necessary variables:
    double priceCents, priceDollars, litres, totalPrice;

    //Prompt for price per litre of gas in cents:
    printf("Please enter the price of a litre of gasoline in cents: ");
    scanf("%lf\n", &priceCents);

    //Prompt for number of litres of gas wanted:
    printf("Please enter the number of litres of gas you want to purchase: ");
    scanf("%lf\n", &litres);

    //Check if either value was entered as negative and quit with error message if true:
    if (priceCents < 0 || litres < 0){
        printf("You may only enter positive values. Please fix this error.\n");
        return 0;
    }

    else{
        //Converting cents to dollars:
        priceDollars = priceCents / 100.0;

        //Compute total price of fuel purchased in dollars:
        totalPrice = priceDollars * litres;

        //Print result of total price of fuel purchased in dollars:
        printf("Your fuel purchase total comes to, in dollars: %.2f\n", totalPrice);

        //Message if price is good:
        if (priceDollars < 1.049){
            printf("You got a good deal.\n");
        }

        //Message if price is too much:
        else if (priceDollars > 1.41){
            printf("You paid too much.\n");
        }

        //Message if price is reasonable:
        else{
            printf("You paid a reasonable price\n");
        }

        //Signal to exit program:
        return 0;
    }
}