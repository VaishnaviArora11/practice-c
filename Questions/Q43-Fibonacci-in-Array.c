//                                                   Question 42 : Fibonacci in Array

// Store Fibbonacci numbers in an array till nth position
// n should be user input 
// Fibbonacci:
//   0, 1, 1, 2, 3, 5, 8, 13, 21, 34


#include <stdio.h>

void storeFibbo(int arr[], int n);
void printFibbo(int arr[], int n);

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    storeFibbo(arr, n);
    printFibbo(arr, n);
}

void storeFibbo(int arr[], int n){
    int fibbo, num1 = 0, num2 = 1;
    arr[0] = num1, arr[1] = num2;
    for(int i = 2; i <= n; i++){
        fibbo = num1 + num2;
        arr[i] = fibbo;
        num1 = num2;
        num2 = fibbo;
    }
}

void printFibbo(int arr[], int n){
    for(int i = 0; i <= n; i++){
        printf("%d\n", arr[i]);
    }
}