//                                                           Question 23 : Factorial of N

// Take user input n
// Print factorial of n 

#include <stdio.h>

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int factorial = 1;
    for (int i = n; i >= 1; i--){
        factorial = factorial * i;
    }
    printf("%d", factorial);
}