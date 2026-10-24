//                                          Question 13 : Student Grading System

// Input marks and output the grade they have scored 
//    marks < 30 : C
//    30 <= marks < 70 : B
//    70 <= marks < 90 : A
//    90 <= marks < 100 : A+
// use if-else 



#include <stdio.h>

int main(){
    float marks;
    printf("Enter marks : ");
    scanf("%f", &marks);
    if(marks < 30){
        printf("C");
    } else if (30 <= marks && marks < 70) {
        printf("B");
    } else if(70 <= marks && marks < 90){
        printf("A");
    } else if (90 <= marks && marks < 100){
        printf("A+");
    } else {
        printf("Not a valid number");
    }
}