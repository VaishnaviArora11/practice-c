//INPUT NUMS AND PRINT SUM : 
// int main(){
//     int a, b;
//     printf("Enter first digit : ");
//     scanf("%d", &a);
//     printf("Enter the second digit : ");
//     scanf("%d", &b);
//     int sum = a + b;
//     printf("The sum is : %d", sum);
//     return 0;
// }
//method 2 : not using a new var for sum
// int main(){
//     int a, b;
//     printf("Enter first digit : ");
//     scanf("%d", &a);
//     printf("Enter the second digit : ");
//     scanf("%d", &b);
//     printf("The sum is : %d", a + b);
//     return 0;
// }

//CALCULATE AREA OF SQUARE :
// int main(){
//     int side;
//     printf("Enter the desired size : ");
//     scanf("%d", &side);
//     int area_ofsquare = side * side;
//     printf("%d", area_ofsquare);
//     return 0; 
// }
// But, the value could be a float value as well :
// int main(){
//     float side;
//     printf("Enter the desired size : ");
//     scanf("%f", &side);
//     float area_ofsquare = side * side;
//     printf("%f", area_ofsquare);
//     return 0; 
// }

//CALCULATE AREA OF A CIRCLE :
// int main(){
//     float radius;
//     float pi = 3.14;
//     printf("Enter the desired radius : ");
//     scanf("%f", &radius);
//     float area_ofcircle = pi * radius * radius;
//     printf("%f", area_ofcircle);
//     return 0; 
// }

//CHECK DIVISIBILTY BY 2 : 
// #include <stdio.h>
// int main(){
//     int x;
//     printf("Enter a number : ");
//     scanf("%d", &x);
//     if(x % 2 == 0){
//         printf("The number is divisible by 2!");
//     } else{
//         printf("Not divisible by 2!");
//     };
// }

//PRINT TRUE AND FALSE : Its sunday and its raining : 
// int main(){
//     int is_sunday = 1;
//     int is_raining = 1;
//     printf("%d", is_sunday && is_raining);
// }

//PRINT TRUE AND FALSE : Its monday or its raining : 
// int main(){
//     int is_monday = 1;
//     int is_raining = 0;
//     printf("%d", is_monday || is_raining);
// }

//PRINT TRUE AND FALSE : Check if its two digit or not :
// int main(){
//     int x;
//     printf("Enter a number : ");
//     scanf("%d", &x);
//     printf("%d", 9 < x && x < 100);
// }

//CHECK WHETHER ADULT OR NOT :
// int main(){
//     int age;
//     printf("Enter age : ");
//     scanf("%d", &age);
//     if(age < 18){
//         printf("Youre a minor!");
//     } else {
//         printf("Youre an adult!");
//     }
// }

//SWITCH-CASE : DAY OF THE WEEK : use numbers 
// int main(){
//     int day;
//     printf("Enter day (1-7 only) : ");                // 1-monday 2-tuesday etc
//     scanf("%d", &day);
//     switch(day){
//         case 1 : printf("Its Monday!");
//                  break;
//         case 2 : printf("Its Tuesday!");
//                  break;
//         case 3 : printf("Its Wednesday!");
//                  break;
//         case 4 : printf("Its Thursday!");
//                  break;
//         case 5 : printf("Its Friday!");
//                  break;
//         case 6 : printf("Its Saturday!");
//                  break;
//         case 7 : printf("Its Sunday!");
//                  break;
//         default : printf("Not a valid number oop");
//     }
// } 

//SWITCH-CASE : DAY OF THE WEEK : use characters : 
// int main(){
//     char day;
//     printf("Enter day : ");             //m-monday, t-tuesday, w, T, f, s, S
//     scanf("%c", &day);
//     switch(day){
//         case 'm' : printf("Its Monday!");
//                  break;
//         case 't' : printf("Its Tuesday!");
//                  break;
//         case 'w' : printf("Its Wednesday!");
//                  break;
//         case 'T' : printf("Its Thursday!");
//                  break;
//         case 'f' : printf("Its Friday!");
//                  break;
//         case 's' : printf("Its Saturday!");
//                  break;
//         case 'S' : printf("Its Sunday!");
//                  break;
//         default : printf("Not a valid character oop");
//     }
// }

//STUDENT PASS OR FAIL : use if-else : 30 <= fail , 30 > pass
// int main(){
//     float marks;
//     printf("Enter marks : ");
//     scanf("%f", &marks);
//     if (marks > 30 && marks <= 100){
//         printf("PASS");
//     } else if(marks > 100) {
//         printf("INVALID");
//     } else {
//         printf("FAIL");
//     };
// }

//STUDENT PASS OR FAIL : use ternary : 30 <= fail , 30 > pass
// int main(){
//     float marks;
//     printf("Enter marks : ");
//     scanf("%f", &marks);
//     marks >= 30 ? printf("Pass") : printf("Fail");
// }

//STUDENT GRADING SYSTEM : (marks < 30 C) , (30 <= marks < 70  B) , (70 <= marks < 90 A)  , (90 <= marks < 100 A+) :
// int main(){
//     float marks;
//     printf("Enter marks : ");
//     scanf("%f", &marks);
//     if(marks < 30){
//         printf("C");
//     } else if (30 <= marks && marks < 70) {
//         printf("B");
//     } else if(70 <= marks && marks < 90){
//         printf("A");
//     } else if (90 <= marks && marks < 100){
//         printf("A+");
//     } else {
//         printf("Not a valid number");
//     }
// }

//CHECK UPPERCASE : 
// int main(){
//     char ch;
//     printf("Enter a character : ");
//     scanf(" %c", &ch);
//     if(65 >= ch && ch <= 90){
//         printf("Uppercase");
//     } else {
//         printf("Not uppercase");
//     }
// }

//PRINT 1 TO 100 USING FOR LOOP :
// int main(){
//     for(int i = 1; i <= 100; i++){
//         printf("%d\n", i);
//     }
// }

//PRINT 100 TO 0 USING FOR LOOP :
// int main(){
//     for(int i = 100; i >= 0; i--){
//         printf("%d\n", i);
//     }
// }

//PRINT 0 TO N (USER INPUT) :
// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d", &n);
//     for(int i = 0; i <= n; i++){
//         printf("%d\n", i);
//     }
// }

//PRINT THE TABLE OF n INPUT :
// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d", &n);
//     for(int i = 1; i <= 10; i++){
//         printf("%d\n", n * i);
//     }
// }

//KEEP TAKING INPUT NUMS UNTIL ODD NUM :
// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d", &n);
//     for(int i = 1; i <= 100; i++){
//         printf("Enter a number :");
//         scanf("%d", &n);
//         if (n % 2 == 1){
//             break;
//         } 
//     }
//     printf("ODD");
// }

//KEEP TAKING INPUT NUMS UNTIL MULTIPLE OF 7 :
//method 1 :
// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d", &n);
//     for(int i = 1; i <= 100; i++){
//         printf("Enter a number :");
//         scanf("%d", &n);
//         if (n % 7 == 0){
//             break;
//         } 
//     }
//     printf("Thank you!");
// }
//method 2 :
// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d", &n);
//     do{
//         printf("Enter a number :");
//         scanf("%d", &n);
//         if (n % 7 == 0){
//             break;
//         }
//     } while(1);
//     printf("Thank you!");
// }

//PRINT 1 TO 10 EXCEPT 6 :
// int main(){
//     int n = 10;
//     for (int i = 1; i <= n; i++){
//         if (i == 6){
//             continue;
//         }
//         printf("%d\n", i);
//     }
// }

//ALL ODD NUMBERS FROM 5 TO 50 : 
// int main(){
//     for (int i = 5; i <= 50; i++){
//         if (i % 2 == 1){
//             printf("%d\n", i);
//         } 
//     }
// }

//FACTORIAL OF NUMBER N : 
// int main(){
//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     int factorial = 1;
//     for (int i = n; i >= 1; i--){
//         factorial = factorial * i;
//     }
//     printf("%d", factorial);
// }

//SUM OF ALL NUMS 5-50 : 
// int main(){
//     int sum = 0;
//     for (int i = 5; i <= 50; i++){
//         sum += i;
//     }
//     printf("%d", sum);
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




#include <stdio.h>

int main(){
    int n, prime = 1;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++){   
        if (n % i == 0){
            prime = 0;
        }
    }
    if(prime == 1){
        printf("Prime number!");
    } else {
        printf("Not Prime");
    }
}




