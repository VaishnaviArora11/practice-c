// #include <stdio.h>
// int main(){
//     int a = 20;
//     int b = 30;
//     int temp = a;
//     a = b;
//     printf("a is = %d\n", a);
//     printf("b is = %d\n", temp);  
// }

#include <stdio.h>
int main(){
    int a = 20;
    int b = 30;
    {
        a = b;
        printf("%d\n", a);
    }
    b = a;
    printf("%d\n", b);
}
