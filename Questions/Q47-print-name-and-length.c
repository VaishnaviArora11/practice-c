//                                                   Question 47 : Print Name and Length

// Input User's full name
// Print the name and its length


#include <stdio.h>

int countLength(char arr[]);

int main(){
    char fullName[100];
    gets(fullName);
    puts(fullName);
    printf("Your name has: %d letters", countLength(fullName));
}

int countLength(char arr[]){
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++){
        if(arr[i] != ' '){
            count++;
        }
    }
    return count;
}