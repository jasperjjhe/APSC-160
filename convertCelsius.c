#include <stdlib.h>
#include <stdio.h>

int main(void){
    double start;
    double inc;
    int num;
    double current;
    double f;
    int count = 0;


    printf("Please enter starting temperature in degrees Celsius: ");
    scanf("%lf\n", &start);

    printf("Please enter the increment: ");
    scanf("%lf\n", &inc);

    printf("Please enter the number of temperatures to convert: ");
    scanf("%d\n", &num);

    while (num < 0){
        printf("Error! Please enter a positive integer: ");
        scanf("%d\n", &num);
    }

    printf("\nC              F\n");
    
    current = start;

    while (count < num){
        current = start + (count * inc);

        printf("%.2f", current);

        f = ((9.0/5.0) * (current)) + 32.0;

        printf("%10.2f", f);

        printf("\n");
        count++;
    }

printf("\n");
return 0;
}