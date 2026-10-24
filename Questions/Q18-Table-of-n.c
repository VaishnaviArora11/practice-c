//                                                    Question 18 : Table of N 

// Take user input n 
// Print the table of the number n till 10



#include <stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    for(int i = 1; i <= 10; i++){
        printf("%d\n", n * i);
    }
}