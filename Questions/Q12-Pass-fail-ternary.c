//                                          Question 12 : Pass or Fail Using Ternary

// Input marks and whether they have passed or failed 
// 30 <= fail , 30 > pass
// use if-else 



#include <stdio.h>

int main(){
    float marks;
    printf("Enter marks : ");
    scanf("%f", &marks);
    marks >= 30 ? printf("Pass") : printf("Fail");
}