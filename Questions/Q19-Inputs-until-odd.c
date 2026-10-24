//                                                        Question 19 : Inputs Until Odd

// Input numbers until the user enters an odd number 



#include <stdio.h>

int main(){
    int n;
    for(int i = 1; i <= 100; i++){
        printf("Enter a number :");
        scanf("%d", &n);
        if (n % 2 == 1){
            break;
        } 
    }
    printf("ODD");
}