#include <stdio.h>

int main(){
    //PROGRAM 1-To count how many times is the given number is present in the array
    int arr[] = {10, 11,11, 34};

    int len, x; printf("Enter the length of the array: ");
    scanf("%d", &len);

    printf("Enter the number x; ");
    scanf("%d", &x);

    len = len - 1;
    int count = 0;

    for (int i = 0; i<=len; i++){
        if (x == arr[i]){
            printf("Found on the index %d\n", i);
            count++;
        }
        else{
            printf("Not on index %d\n", i);
        }
    }
    if (count == 0){
        printf("Not found in the array :(");
    }
    else{
        printf("yeah! found %d times in the array!\n", count);
    }


    return 0;
}