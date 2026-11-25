//                                                   Question 48 : Input String Using %c

// Input String from the User
// Use %c 


#include <stdio.h>

int main(){
    char strInput[100];
    char ch;
    int i = 0;
    while(ch != '\n'){
        scanf("%c", &ch);
        strInput[i] = ch;
        i++; 
    }
    strInput[i] = '\0';
    puts(strInput);
}

