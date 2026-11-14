//



#include <stdio.h>


void fibo(int n);

int main(){
    int n;
    scanf("%d", &n);
    fibo(n);
}

void fibo (int n){
    int fibo1 = 0;
    int fibo2 = 1;
    printf("%d, ", fibo1);
    for(int i = 0; i <= n; i++){
        printf("%d, ", fibo2);
        int temp = fibo1 + fibo2;
        fibo1 = fibo2;
        fibo2 = temp;
    }
}