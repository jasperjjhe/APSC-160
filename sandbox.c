#include <stdlib.h>
#include <stdio.h>

int main(void){
    int year;

    printf("Please enter a year: ");
    scanf("%i", &year);

    if (year < 1582){
        printf("The Gregorian Calendar had not been adopted at that time");
        return 0;
    }

    if (year % 4 == 0 && year % 100 == 0 && year % 400 ==0){
        printf("%i is a leap year", year);
        return 0;
    
    }

    else{
        printf("%i is not a leap year", year);
        return 0;
    }
}