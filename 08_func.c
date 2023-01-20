//making functions of 01,02&03
#include <stdio.h>

void areasqr(int n);
void areacir(int r);
void arearec(int l, int b);;



int main(){
    areasqr(5);
    areacir(5);
    arearec(5, 5);
    return 0;
}


void areasqr(int n){
    printf("The area of square is: %d \n", n*n);
}

void areacir(int r){
    float pi = 3.14;
    printf("The area of circle is: %f \n", pi * r *r);
}

void arearec(int l, int b){
    printf("The area of rectangle is : %d \n", l*b);
}