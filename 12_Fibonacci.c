//printing fibonacci sequence till the number n;
#include <stdio.h>

int main(){
    int n;
    printf("Enter n: (n>2) ");
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;//These are the confirmed values...
    fib[1] = 1;//These are the confirmed values...

    for (int i=2; i<n; i++){
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d \t", fib[i]);
    }

    return 0;
}