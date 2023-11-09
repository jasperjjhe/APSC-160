#include <stdlib.h>
#include <stdio.h>

int factorial(int);

double choose(int, int);

int main(void){



    return 0;
}

int factorial(int n){
    int out = 1;

    while (n > 0){
        out *= n;
        n--;
    }

    return out;
}

double choose(int n, int r){


    double out;

    out = ((double) factorial(n)) / (((double) factorial(r)) * (double) factorial(n - r));

    return out;


}