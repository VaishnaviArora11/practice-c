//                                                    Question 24 : Sum of All 5 - 50

// Print sum of all numbers 5 to 50


#include <stdio.h>

int main(){
    int sum = 0;
    for (int i = 5; i <= 50; i++){
        sum += i;
    }
    printf("%d", sum);
}