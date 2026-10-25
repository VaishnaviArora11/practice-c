//                                                         Question 26 : Namaste Bonjour 

// Create two functions namaste and Bonjour 
// Print namaste if the user is indian, bonjour if french  

#include <stdio.h>

void namaste();
void bonjour();

int main(){
    char country;
    scanf("%c", &country);
    switch(country){
        case 'i' : namaste();
                   break;
        case 'f' : bonjour();
                   break;
        default :  printf("Thank you!");
                   break;
    }
}

void namaste(){
    printf("Namaste");
}

void bonjour(){
    printf("Bonjour");
}