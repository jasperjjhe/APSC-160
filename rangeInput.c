#include <stdlib.h>
#include <stdio.h>

int getInputInRange(int, int);

int main(void){
    int min, max;
    scanf("%d, %d", &min, &max);
    printf("%d", getInputInRange(min,max));
    return 0;
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