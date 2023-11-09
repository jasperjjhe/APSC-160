#include <stdlib.h>
#include <stdio.h>

int main(void){
    double purchasePrice;
    double grossTax;
    double rebate;
    double finalTax;
    printf("Please enter purchase price: ");
    scanf("%lf", &purchasePrice);
    if (purchasePrice < 0){
        printf("The house price cannot be negative.");
        return 0;
    }
    grossTax = 0.05 * purchasePrice;

    if (purchasePrice <= 350000.0){
        rebate = 0.36 * grossTax;
        if (rebate > 5000.0){
            rebate = 5000.0;
        }
    }

    else if (purchasePrice < 450000.0){
        rebate = ( 5000.0 * ( 450000.0 - purchasePrice ) ) / ( 100000.0 );
    }

    else{
        rebate = 0;
    }

    finalTax = grossTax - rebate;
    printf("GST payable: %f", finalTax);
    return 0;
}