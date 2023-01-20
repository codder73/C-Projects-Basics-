#include <stdio.h>

int main(){
    printf("Hello, welcome to the percentage finder for class 9\n");

    int num1, num2, num3, num4, num5;
    int sum, t_num, t_n_sum;

    for (int n=1; n<=5; n++){
        printf("Enter the marks of sub %d: ", n);
        if (n==1){
            scanf("%d", &num1);
        }
        if (n==2){
            scanf("%d", &num2);
        }
        if (n==3){
            scanf("%d", &num3);
        }
        if (n==4){
            scanf("%d", &num4);
        }
        if (n==5){
            scanf("%d", &num5);
        }
    }

    sum = num1 + num2 + num3 + num4 + num5;
    printf("The sum of your numbers is: %d \n", sum);

    printf("Enter the total marks of a exam: "); scanf("%d", &t_num);
    t_n_sum = t_num *5;
    printf("Your total number: %d, Total number of which exam was held: %d\n",sum, t_n_sum );


    //Percentage;
    float fr = sum*100/t_n_sum;
    int prc = fr;
    printf("Your avg. percentage is: %d%%", prc);
printf("\n|||||Thankyou  ^_^|||||\n");
printf("may you get more numbers next time...");
    return 0;
}