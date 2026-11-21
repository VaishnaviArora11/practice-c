//                                                   Question 36 : Swap numbers using pointers

// Create variables a, b
// swap a and b
// use call by value for a and b, then use call by reference


#include <stdio.h>


void swapByValue(int a, int b);
void swapByRef(int *a, int *b);

int main(){
    int a = 3, b = 5;
    swapByRef(&a, &b);
    printf("%d %d", a, b);
}

void swapByRef(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("%d %d", *a, *b);
}

void swapByValue(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("%d %d", a, b);
}