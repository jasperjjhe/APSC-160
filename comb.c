#include <stdlib.h>
#include <stdio.h>

int factorial(int);

int choose(int, int);

int main(void){
    int n, r;
    int nCr;
    scanf("%d %d\n", &n, &r);
    nCr = choose(n,r);
    printf("%d", nCr);

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

int choose(int n, int r){


    int out;

    out = (factorial(n)) / ((factorial(r)) * factorial(n - r));

    return out;


}