//      #include <stdio.h>
//      int main(){
//          printf("Hello World");
//          return 0;
//          }

//VARIABLES: 
// Variable is the name of a memory location which stores some data
// Rules for writing var :
//  1. Case Sensitive
//  2. 1st char is alphabet or '_'
//  3. no comma or blank space
//  4. No symbol other than '_' 
// Should have a meaningful name
// Variables are mutable
//         int main(){
//             int num = 25;
//             char star = '*';
//             int age = 18;
//             float pi = 3.14;
//             return 0;
//         }


// the C language does not have strings, booleans, classes and objects being one of the oldest language 
// we need to learn other languages for that

//Data Types sizes : (in bytes)
    // char or unsignedd char              1
    // Unsigned char                       1
    // int or signed int                    2
    // Unsigned int                        2
    // Short int or unsigned short int     2
    // signed short int                    2
    // long int or signed long int         4
    // unsigned long int                   4
    // float                               4
    // double                              8
    // long double                         10

//DATA TYPE : 
// 1. Int :
//    Stores whole numbers only
//          int age = 22;
// 2. Float : 
//    Stores decimal values
//          float pi = 3.14
// 3. Char :
//    Stores Characters 
//    written in between single qoutes
//          char hashtag = '#'    

//CONSTANTS :
// Values that are fixed
// Types of Constants : 
//  1. Integer constants :
//     1, 2, 3, 0, -1, -2
//  2. Real Constants :
//     1.0, 2.0, 3.14, -2.4
//  3. Character Constants :
//     'a', 'b', 'A', '#', '&'

//KEYWORDS:
// Reserved words that have a meaning defined to the compiler
// These cant be used as var names
// There are 32 keywords in C
//          auto, double, int, struct
//          break, else, long, switch
//          case, enum, register, typedef
//          char, extern, return, union
//          continue, for signed, void
//          do, if, static, while
//          default, goto, sizeof, volatile
//          const, float, short, unsigned

//COMMENTS :
// Single line comments can be written by writing // right before the comment  
// Multiple line comments can be written between /* and */

//OUTPUT : 
// printf command is used for output
//          printf("Hello World");
// to print anything after this in the next line, use \n for new line : 
//          printf("Hello World \n");
// Lets suppose we store a variable and want to print it, we will have to write it this way : 
//  1. Integers : 
//          int age = 22;
//          printf("age is %d", age)
//  2. Real Numbers : 
//          float pi = 3.14;
//          printf("the value of pi is %f", pi);
//  3. Characters :
//          char hashtag = '#';
//          printf("Hashtag is : %c", hashtag);
//  4. Double :
//          %lf
// these percentage thingies are called Format Specifiers
// use \n to print in next line
//          printf("age is : %d \n", age)

//INPUT : 
// scanf command is used to store input
//          scanf("%d", &age);
// & is used as to define address, showing the scanf function the place/the var to store the input in the memory

//COMPILATION : 
// A computer program that translates C code into machine code
// coderun.c   ->   c compiler    ->   a.exe in windows  /  a.out in linux and mac  (by default) 

//INSTRUCTIONS:
// These are statements in a program
// Types of instructions are :
//  1. Type declaration instructions
//     -> declare variable before using it 
//  2. Arithematic instructions
//     -> single var in the LHS
//     -> + - * / %
//     -> for power :     (will have to include header file #include <math.h>)
//          pow(x, y)     for x to the power of y   
//     -> Modular operator :
//          returns remainder for int
//          if there is a -ve numerator, the remainde rwill be -ve as well
//  3. Control Instructions

//TYPE CONVERSIONS IN ARITHEMATIC OP :
// int op int = int
// int op float = float
// float op float = float
// Special cases :
//  1. 2/3 = 0
//  2. 2.0/3 = 0.666667
// Types of conversions :
//  1. Implicit :
//     -> int ya double float mein jakr store ho skta h because its smaller data type 
//     -> but float jaisa bigger, cant be stored in int or float implicitly 
//  2. Explicit :
//     -> done by :
//            int a = (int) 1.999999   double to int     output : 1

//OPERATOR PRECEDENCE:
//   * / %    ->   + -   ->   = 
// For same precendence : we go left to right
//            int a = 4 * 3 / 6 * 2      -> it will be solved like : [{(4 * 3) / 6} * 2]

//CONTROL INSTRUCTIONS : 
// Instructions that alter the sequence/flow of instructions
// 1. Sequence Control : 
//    All the usual statements, variable decl, printf, scanf, etc
// 2. Decision Control : 
//    if-else 
// 3. Loop Control : 
//    for, while
// 4. Case Control : 
//    switch-case

//OPERATORS : 
// 1. Arithematic
// 2. Relational
// 3. Logical
// 4. Bitwise
// 5. Assignment 
// 6. Ternary

//2. Relational : 
//   -> ==, >, >=, <=, !=
//   -> output will be 1 or 0 as there is no true false in c

//3. Logical :
//   -> &&, ||, !
//   -> To check one two conditions for their truthness
//   -> && (Logical AND) : 
//           If both are true, final output will be True
//           If eany one of the n statements is false, it will be false
//   -> || (Logical OR) :
//           If any one of n statements is True, it will display 1 (True)
//   -> !  (Logical NOT) :
//           Converts true to false and vice versa

//OPERATOR PRECEDENCE : 
//                    1.           ! 
//                    2.           *  /  %
//                    3.           +  -
//                    4.           <  <=  >=  >
//                    5.           ==  !=
//                    6.           &&
//                    7.           ||
//                    8.           =

//4. Assignment Operators : 
//   -> = 
//   -> += increment in the LHS 
//   -> -=
//   -> *= 
//   -> /=
//   -> %=











#include <stdio.h>
int main(){
    int x, i;
    printf("Random code so that the comments are visible");
}







