//We are going to print table of a given number using for loop in c
#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Printing the table of %d", num);
    for (int i=1; i<=10; i++){
        printf("%d x %d = %d\n", num, i, num*i);
    }
    return 0;
}