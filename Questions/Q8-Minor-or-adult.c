//                                                 Question 7 : Check Minor or Adult

// Take a user input and print whether the inputted age is minor or Adult 



#include <stdio.h>

int main(){
    int age;
    printf("Enter age : ");
    scanf("%d", &age);
    if(age < 18){
        printf("Youre a minor!");
    } else {
        printf("Youre an adult!");
    }
}