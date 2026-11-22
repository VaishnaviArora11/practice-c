//                                                   Question 38 : GST Add

// store prices in an array
// print the final price after 18% GST


#include <stdio.h>

int main(){
    float gstAdd[3];
    scanf("%f", &gstAdd[0]);
    scanf("%f", &gstAdd[1]);
    scanf("%f", &gstAdd[2]);
    printf("%f %f %f", gstAdd[0] + gstAdd[0]*0.18, gstAdd[1] + gstAdd[1]*0.18, gstAdd[2] + gstAdd[2]*0.18);
}

