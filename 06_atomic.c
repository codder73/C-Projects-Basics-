#include <stdio.h>
//it is made using 
int main(){
    printf("Hello, here you can easily findout any atom, just easily enter the atomic number of tht atom\n");
    int no;
    printf("Enter the atomic no.: ");
    scanf("%d", &no);
    switch (no){
        case 1 : printf("Hydrogen\n");break;
        case 2 : printf("Helium\n");break;
        case 3 : printf("Lethium\n");break;
        case 4 : printf("Berilium\n");break;
        case 5 : printf("Boron\n");break;
        case 6 : printf("Carbon\n");break;
        case 7 : printf("Nitrogen\n");break;
        case 8 : printf("Oxygen");break;
        case 9 : printf("Florine");break;
        case 10 : printf("Neon");break;
        case 11 : printf("Sodium");break;
        case 12 : printf("Magnesium");break;
        case 13 : printf("Alumium");break;
        case 14 : printf("Silicon");break;
        case 15 : printf("Phosphorus");break;
        case 16 : printf("Sulphur");break;
        case 17 : printf("Chlorine");break;
        case 18 : printf("Argon");break;
        case 19 : printf("Pottasium");break;
        case 20 : printf("Calcium");break;
    }  
        printf("Class 9 have fun!");
        return 0;
}