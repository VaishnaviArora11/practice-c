//                                                   Question 39 : Aadhar Values in an Array

// store aadhar values of 10 people in an array
// print all the values


#include <stdio.h>

int main(){
    int aadhar[10];
    int *ptr = &aadhar[0];
    for (int i = 0; i < 10; i++){
        scanf("%d", (ptr + i));
    }
    for (int i = 0; i < 10; i++){
        printf("%d\n", aadhar[i]);        //can also use: printf("%d\n", *(ptr + i));
    }
}

