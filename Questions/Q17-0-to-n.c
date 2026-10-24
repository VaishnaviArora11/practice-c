//                                                    Question 17 : Print 1 to N

// Input number N
// Print 1 to N numbers
// use for loop



#include <stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    for(int i = 0; i <= n; i++){
        printf("%d\n", i);
    }
}