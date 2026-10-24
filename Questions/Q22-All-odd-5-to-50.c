//                                                             Question 22 : All Odd 5 to 50

// Printf all odd numbers between 5 to 50


#include <stdio.h>

int main(){
    for (int i = 5; i <= 50; i++){
        if (i % 2 == 1){
            printf("%d\n", i);
        } 
    }
}