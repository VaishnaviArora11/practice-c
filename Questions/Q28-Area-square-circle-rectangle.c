//                                            Question 28 : Area of Square, Circle, Rectangle

// Take user input what they want to calculate 
// Take user input of side/radius
// WAF to calculate Area 

#include <stdio.h>

int area_square(int side);
int area_rectangle(int length, int breadth);
float area_circle(float radius);

int main(){
    char area_ask;
    int side, length, breadth;
    float radius;
    scanf("%c", &area_ask);
    switch(area_ask){
        case 's' : scanf("%d", &side);
                   printf("%d", area_square(side));
                   break;
        case 'r' : scanf("%d %d", &length, &breadth);
                   printf("%d", area_rectangle(length, breadth));
                   break;
        case 'c' : scanf("%f", &radius);
                   printf("%f", area_circle(radius));
                   break;          
    }
}

int area_square(int side){
    return side * side;
}
int area_rectangle(int length, int breadth){
    return length * breadth;
}
float area_circle(float radius){
    return 3.14 * radius * radius;
}