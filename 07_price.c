//In this file we will make a prgram wich calculate
// the price of an object + 18% gst on it...
//Means total price of an object, using functions
#include <stdio.h>

void printTotalPrice(int num);

int main(){
    int n;
    printf("Enter the price of the product in rs: ");
    scanf("%d", &n);
    printTotalPrice(n);
}

void printTotalPrice(int num){
    printf("Price without gst %d Rs.\n", num);
    int gst, ttl;
    gst = 18*num/100;
    printf("gst on this product is: %f\n", gst);
    ttl = gst + num;
    printf("Total price of this product is: %d\n", ttl);

}