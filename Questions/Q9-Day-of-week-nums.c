//                                                 Question 8 : Day of the Week Using Numbers 

// Take a user input in integer format, and print whether the inputted number is which day of the week
// Use Switch-case



#include <stdio.h>

int main(){
    char day;
    printf("Enter day : ");             //m-monday, t-tuesday, w, T, f, s, S
    scanf("%c", &day);
    switch(day){
        case 'm' : printf("Its Monday!");
                 break;
        case 't' : printf("Its Tuesday!");
                 break;
        case 'w' : printf("Its Wednesday!");
                 break;
        case 'T' : printf("Its Thursday!");
                 break;
        case 'f' : printf("Its Friday!");
                 break;
        case 's' : printf("Its Saturday!");
                 break;
        case 'S' : printf("Its Sunday!");
                 break;
        default : printf("Not a valid character oop");
    }
}