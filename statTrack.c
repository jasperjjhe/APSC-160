#include <stdlib.h>
#include <stdio.h>

double mean(double data[], int size);
double var(double data[], int size);
double sdev(double data[], int size);
double minimum(double data[], int size);

int main(void){
    return 0;
}

double mean(double data[], int size){
    double sum = 0;

    for (int index = 0; index < size; index++){
        sum += data[index];
    }

    return (sum / (double) size);
}

double var(double data[], int size){
    double sum = 0;
    double avg = mean(data, size);
    for (int index = 0; index < size; index++){
        sum += (data[index] - avg) * (data[index] - avg);
    }

    return (sum / (size - 1));
}

double sdev(double data[], int size){
    return (sqrt(var(data, size)));
}

double minimum(double data[], int size){
    double min = data[0];
    for (int index = 1; index < size; index++){
        if (data[index] < min){
            min = data[index];
        }
    }
    return min;
}