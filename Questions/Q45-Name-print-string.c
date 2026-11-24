//                                                   Question 45 : Name Print in String

// Print firstName and lastName
// Use for loop


#include <stdio.h>

void printString(char arr[]);

int main(){
    char firstName[] = "Vaishnavi";
    char lastName[] = "Arora";
    printString(firstName);
    printString(lastName);
}

void printString(char arr[]){
    for(int i = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}