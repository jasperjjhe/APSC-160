#include <stdlib.h>
#include <stdio.h>

int factorial(int);

int choose(int, int);

int getInputInRange(int, int);

int main(void){
    int count = 1;
    int rows = getInputInRange(1, 12);
    int n = 0;
    int r = 0;

    while (count <= rows){
        int num = count;
        r = 0;
        while (num > 0){
            printf("%3d ", choose(n, r));
            num--;
            r++;
        }
        printf("\n");
        count++;
        n++;
    }

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

int getInputInRange(int min, int max){
    int in;
    scanf("%d\n", &in);
    while (in < min || in > max){
        printf("error\n");
        scanf("%d\n", &in);
    }
    return in;
}