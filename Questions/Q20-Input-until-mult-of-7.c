//                                                   Question 20 : Input Until Multiple of 7

// Take user input and keep taking it until multiple of 7



#include <stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    for(int i = 1; i <= 100; i++){
        printf("Enter a number :");
        scanf("%d", &n);
        if (n % 7 == 0){
            break;
        } 
    }
    printf("Thank you!");
}