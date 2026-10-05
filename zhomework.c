//CALCULATE PERIMETER OF A RECTANGLE :
// int main(){
//     float length;
//     float breadth;
//     printf("Enter the desired Length : ");
//     scanf("%f", &length);
//     printf("Enter the desired Breadth : ");
//     scanf("%f", &breadth);
//     float perimeter_ofrect = 2 * (length + breadth);
//     printf("%f", perimeter_ofrect);
//     return 0; 
// }

//CALCULATE CUBE OF INPUT NUM
// int main(){
//     int n;
//     printf("Enter the desired num1 : ");
//     scanf("%d", &n);
//     int cube = n * n * n;
//     printf("The Cube is : %d", cube);
// }

//PRINT AVERAGE OF 3 NUMS : 
// int main(){
//     int x, y, z;
//     printf("Enter first number : ");
//     scanf("%d", &x);
//     printf("Enter second number : ");
//     scanf("%d", &y);
//     printf("Enter third number : ");
//     scanf("%d", &z);
//     float average = (x + y + z) / 3;
//     printf("The average is : %f", average);
// }

//CHECK IF A GIVEN CHARACTER IS A DIGIT OR NOT : 
//int main(){
//     char ch;
//     printf("Enter your character : ");
//     scanf(" %c", &ch);
//     printf("%d", ch >= '0' && ch <= '9');
// }

//PRINT SMALLEST NUMBER : 
//



























#include <stdio.h>
int main(){
    int x, y, z;
    printf("Enter first number : ");
    scanf("%d", &x);
    printf("Enter second number : ");
    scanf("%d", &y);
    printf("Enter third number : ");
    scanf("%d", &z);
    int smallest;
    if (x > y){
        smallest = y;
    } else{
        smallest = x;
    }
    if (smallest > z){
        smallest = z;
    } else {
        smallest = smallest;
    }
    printf("%d", smallest);
}