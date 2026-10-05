// %c behave differently than any other format specifier in scanf
// you need a whitespace before using it if when there is a leftover newline ('\n') in the input buffer from a previous scanf
// Example : scanf(" %c", grade);

// int x; int y = x; is valid
// int x, int y = x; is invalid as it goes against our pipe declaration rule

// char type can only store one character 
// it doesnt have more space to store more than one 
// that includes any kind of whitespaces too
// char alp = '**' is invalid
// char alp = '* ' is invalid
// char alp = '*' is valid

// you dont need to use curly braces in if-else if there is a single line to be written inside
//        if (age < 18)
//            printf("Youre a minor!");
//        else 
//            printf("Youre an adult!");
// but this is not a good practice since you need to be consistent with your code

// int x = 2;
// if(x = 1){
//   printf("Its 1");
// } else {
//   printf("Its not 1");
// }
// What will happen in this is :
// it will give a warning since we didnt use relational == but assignment = in this 
// so it stores the value of x as 1 inside it after a warning 
// not give an error 
// so it executes the if statement as it takes it to be true
// the same happens if we do it with any number n instead of 1 












#include <stdio.h>
int main(){
    int x, i;
    printf("Random code so that the comments are visible...");
}