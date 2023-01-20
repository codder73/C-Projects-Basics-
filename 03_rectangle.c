#include <stdio.h>

int main(){
    printf("Hello, you can find perimeter and area of rectangle using this file:");
    printf("Enter, what do you want to find out:\na for area & p for perimeter: ");
    char a_p;
    scanf("%c", &a_p);
    

    if (a_p=='a'){//finding area
        int br, ln;
        printf("Enter the length of rectangle: "); scanf("%d",&ln);
        printf("Enter the breadth of rectangle: "); scanf("%d",&br);
            printf("Area is: ", br*ln);
    }
    else if (a_p=='p'){//find perimeter
        int br, ln;
        printf("Enter the length of rectangle: "); scanf("%d",&ln);
        printf("Enter the breadth of rectangle: "); scanf("%d",&br);
        int sum;
        sum = ln + br;
        printf("Perimeter is %d", 2*sum);
    }

    return 0;
}