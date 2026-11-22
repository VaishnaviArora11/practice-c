//                                                   Question 41 : Count Odds in Array 

// Count the number of odd numbers in an array



#include <stdio.h>

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int odds = 0;
    for(int i = 0; i < 5; i++){
        if(arr[i] % 2 != 0){
            odds++;
        }
    }
    printf("%d", odds);
}