//                                                   Question 35 : Access Through pptr

// Access a variable i = 5 
// use through pptr



#include <stdio.h>

int main(){
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;
    printf("%d", **pptr);
}