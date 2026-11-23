//                                                   Question 42 : Reverse an Array 

// Reverse the order of values of an array



#include <stdio.h>

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int firstVal, secondVal;
    int n = sizeof(arr);
    for(int i = 0; i <= (n / 2); i++){
        firstVal = arr[i];
        secondVal = arr[n - i - 1];
        arr[i] = secondVal;
        arr[n - i - 1] = firstVal;
    }
    int i = 0;
    while(i <= n - 1){
        printf("%d", arr[i]);
    }
}