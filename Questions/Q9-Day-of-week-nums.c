//                                                 Question 9 : Day of the Week Using Numbers 

// Take a user input in integer format, and print whether the inputted number is which day of the week
// Use Switch-case



#include <stdio.h>

int main(){
    int day;
    printf("Enter day (1-7 only) : ");                // 1-monday 2-tuesday etc
    scanf("%d", &day);
    switch(day){
        case 1 : printf("Its Monday!");
                 break;
        case 2 : printf("Its Tuesday!");
                 break;
        case 3 : printf("Its Wednesday!");
                 break;
        case 4 : printf("Its Thursday!");
                 break;
        case 5 : printf("Its Friday!");
                 break;
        case 6 : printf("Its Saturday!");
                 break;
        case 7 : printf("Its Sunday!");
                 break;
        default : printf("Not a valid number oop");
    }
} 