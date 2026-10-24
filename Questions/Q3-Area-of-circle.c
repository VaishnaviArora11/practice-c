//                                               Question 3 : Area of a Circle 

// Take user input and calculate the area of a circle 

#include <stdio.h>

int main(){
    float radius;
    float pi = 3.14;
    printf("Enter the desired radius : ");
    scanf("%f", &radius);
    float area_ofcircle = pi * radius * radius;
    printf("%f", area_ofcircle);
    return 0; 
}