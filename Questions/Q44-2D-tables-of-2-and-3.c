//                                                   Question 43 : 2D Tables

// Print the tables of 2 and 3
// store them in a 2D array


#include <stdio.h>

void storeTables(int arr[][2], int n);
void printTables(int arr[][2], int n);

int main(){
    int n = 10;
    int m = 2;
    int arr[n][m];
    storeTables(arr, n);
    printTables(arr, n);
}

void storeTables(int arr[][2], int n){
    for(int i = 0; i < n; i++){
        arr[0][i] = 2 * (i + 1);
        arr[1][i] = 3 * (i + 1);
    } 
}

void printTables(int arr[][2], int n){
    for(int i = 0; i < n; i++){
        printf("2 x %d = %d\n", (i + 1), arr[0][i]);
    }
    for(int i = 0; i < n; i++){
        printf("3 x %d = %d\n", (i + 1), arr[1][i]);
    }
}