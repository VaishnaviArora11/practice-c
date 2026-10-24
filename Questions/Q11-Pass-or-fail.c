//                                          Question 11 : Pass or Fail 

// Input marks and whether they have passed or failed 
// 30 <= fail , 30 > pass
// use if-else 



#include <stdio.h>

int main(){
    float marks;
    printf("Enter marks : ");
    scanf("%f", &marks);
    if (marks > 30 && marks <= 100){
        printf("PASS");
    } else if(marks > 100) {
        printf("INVALID");
    } else {
        printf("FAIL");
    };
}