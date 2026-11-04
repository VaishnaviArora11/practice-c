//                                                  Question 32 : Celsius to Farenheit

// WAF to Convert Celsius to Farenheit 
// Take user input n degree celsius
// Farenheit = (Celsius * 9/5) + 32
// Print result upto two decimal places



#include <stdio.h>

float celsiusToFarenheit(int n);

int main(){
    int n;
    scanf("%d", &n);
    printf("%.2f", celsiusToFarenheit(n));
}

float celsiusToFarenheit(int n){
    return (n * 9/5.0) + 32;
}