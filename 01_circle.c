#include <stdio.h>

//In this file we will make a program to find out the 
// circumference of a circle using c lang
int main(){
    printf("Hello,Welc;ome!");
    printf("what do you want to find of circle: \n c for circumference & \n a for area: ");
    char c_a;
    scanf("%c", &c_a);
    // printf("%c", c_a);

    if (c_a == 'c'){
        int r;
        printf("Enter the radius of the circle: ");
        scanf("%d", &r);
        // printf("the radius of circle is: %d", r);
        float pi = 3.14;
        float pi2 = pi*2;
        printf("The circumference of circle is: %f", pi2*r);
    }
    else if (c_a == 'a'){
        int r;
        printf("Enter the radius of the circle: ");
        scanf("%d", &r);
        float pi = 3.14;
        printf("The area of circle is %f", pi*r*r);
    }
    
    return 0;
}