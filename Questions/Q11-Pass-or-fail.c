//                                          Question 11 : Pass or Fail 

// Input marks and whether it has passed or failed 
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