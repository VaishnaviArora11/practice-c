//                                                  Question 31 : Factorial of N Using Recursion

// Print factorial of user input n
// Use Recursion



#include <stdio.h>

int factorialOfN(int n);

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", factorialOfN(n));
}

int factorialOfN(int n){
    if (n == 0){
        return 1;
    }
    int factNMOne = factorialOfN(n - 1);
    int factOfN = factNMOne * n;
    return factOfN;
}