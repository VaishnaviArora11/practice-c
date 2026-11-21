//                                                   Question 37 : Return Multiple Values

// Create variables a, b
// return their sums, products and averages 
// youre allowed to create only one function


#include <stdio.h>


void doWork(int a, int b, int *sum, int *prod, int *avg);

int main(){
    int a = 3, b = 5;
    int sum, prod, avg;
    doWork(a, b, &sum, &prod, &avg);
    printf("Sum = %d\nProduct = %d\nAverage = %d", sum, prod, avg);
}

void doWork(int a, int b, int *sum, int *prod, int *avg){
    *sum = a + b;
    *prod = a * b;
    *avg = *sum / 2;
}