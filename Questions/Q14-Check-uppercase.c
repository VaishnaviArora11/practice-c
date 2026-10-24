//                                             Question 14 : Check Uppercase

// Input a character and check whether its uppercase

#include <stdio.h>

int main(){
    char ch;
    printf("Enter a character : ");
    scanf(" %c", &ch);
    if(65 <= ch && ch <= 90){
        printf("Uppercase");
    } else {
        printf("Not uppercase");
    }
}