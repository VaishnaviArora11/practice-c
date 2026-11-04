//                                                  Question 33 : Marks Percentage

// WAF to calculate Percentage of a students marks 
// Take user input for science, maths and sanskrit marks
// Print result upto two decimal places



#include <stdio.h>

float percentageMarks(int sc, int ma, int san);

int main(){
    int sc, ma, san;
    scanf("%d %d %d", &sc, &ma, &san);
    printf("%.2f", percentageMarks(sc, ma, san));
}

float percentageMarks(int sc, int ma, int san){
    return (sc + ma + san) * 100 / 300;
}