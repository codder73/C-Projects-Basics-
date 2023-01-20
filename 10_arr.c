#include <stdio.h>

void odd_in_array(int arr[], int n);

int main(){
        int array[4] = {5,3, 2 ,1};
        odd_in_array(array, 4);
    return 0;
}

void odd_in_array(int arr[], int n){
    int count = 0;
    for (int i=0; i<n ; i++){
        printf("%d index ", i);
        printf("number is: %d\n", arr[i]);
        if (arr[i]%2 != 0){
            count++;
            printf("It is an odd number \n");
        }
        else{
            printf("It is an even number \n");
        }
        // else if():
        printf(" No of odd numbers are: %d ", count);
    }
}