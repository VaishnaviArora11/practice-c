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
// int main(){
//     int x, y, z;
//     printf("Enter first number : ");
//     scanf("%d", &x);
//     printf("Enter second number : ");
//     scanf("%d", &y);
//     printf("Enter third number : ");
//     scanf("%d", &z);
//     int smallest;
//     if (x > y){
//         smallest = y;
//     } else{
//         smallest = x;
//     }
//     if (smallest > z){
//         smallest = z;
//     } else {
//         smallest = smallest;
//     }
//     printf("%d", smallest);
// }

//FIND ARMSTRONG OF A 3 DIGIT NUM : 
// int main(){
//     int num, a, b, c;
//     printf("Enter a 3 digit number : ");
//     scanf("%d", &num);
//     a = num / 100;
//     b = (num / 10) % 10;
//     c = num % 10;
//     int armstrong = (a * a * a) + (b * b * b) + (c * c * c);
//     printf("%d", armstrong);
// }

//CHECK IF NUMBER IS NATURAL NUMBER :
// int main(){
//     int a;
//     printf("Enter a number : ");
//     scanf("%d", &a);
//     if(a >= 1){
//         printf("Its a natural number");
//     } else {
//         printf("Not a natural number");
//     };
// }

//SQUARE PATTERN :
// int main(){
//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++){   
//         for(int j = 1; j <= n; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

//PRIME OR NOT :
// int main(){
//     int n, prime = 1;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     for (int i = 2; i < n; i++){   
//         if (n % i == 0){
//             prime = 0;
//         }
//     }
//     if(prime == 1){
//         printf("Prime number!");
//     } else {
//         printf("Not Prime");
//     }
// }




#include <stdio.h>

int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    if(a >= 1){
        printf("Its a natural number");
    } else {
        printf("Not a natural number");
    };
}

















