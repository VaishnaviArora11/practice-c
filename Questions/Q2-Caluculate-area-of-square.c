//                                   Question 2 : Area of square

// Take user input in a variable side and print the area of square

#include <stdio.h>

int main(){
    int side;
    printf("Enter the desired size : ");
    scanf("%d", &side);
    int area_ofsquare = side * side;
    printf("%d", area_ofsquare);
    return 0; 
}

// Value can be float value as well, so code the same for float