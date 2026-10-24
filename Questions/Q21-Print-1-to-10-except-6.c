//                                                                 Question 21 : Print 1 to 10 Except 6 

// Print numbers 1 to 10 except for 6

#include <stdio.h>

int main(){
    int n = 10;
    for (int i = 1; i <= n; i++){
        if (i == 6){
            continue;
        }
        printf("%d\n", i);
    }
}