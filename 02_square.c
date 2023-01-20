#include <stdio.h>

int main() {
    char a_p;
    printf("Hello, what do you want to find about square,\na for area & p for perimeter: ");
    scanf("%c", &a_p);

    if (a_p=='a'){
        int side;
        printf("Enter the length of side of square: ");
        scanf("%d", &side);
        printf("The area of square is %d", side*side);
    }
    else if (a_p=='p'){
        int side;
        printf("Enter the length of side of square: ");
        scanf("%d", &side);
        printf("The perimeter of square is %d", 4*side);
    }

    return 0;
}