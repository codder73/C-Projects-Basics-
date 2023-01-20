//Making a program to print a reversed array
#include <stdio.h>

void retArr(int *arr, int a);

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    retArr(arr, 5);
    return 0;
}

void retArr(int *arr, int a){
    printf("Reverse Array- \n");
    a = a - 1;
    for (int i = 0; a>=i; a--){
        printf("%d ", *(arr+a));
    }
}