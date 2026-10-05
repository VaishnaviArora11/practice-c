// %c behave differently than any other format specifier in scanf
// you need a whitespace before using it 
// Example : scanf(" %c", grade);

// int x; int y = x; is valid
// int x, int y = x; is invalid as it goes against our pipe declaration rule

// char type can only store one character 
// it doesnt have more space to store more than one 
// that includes any kind of whitespaces too
// char alp = '**' is invalid
// char alp = '* ' is invalid
// char alp = '*' is valid

#include <stdio.h>
int main(){
    int x, i;
    printf("Random code so that the comments are visible");
}