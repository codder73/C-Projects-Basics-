#include <stdio.h>

void printTables(int arra[][10], int n, int m, int num);


int main(){
    int tables[2][10];
    printTables(tables, 0, 10, 2);

    for (int i=0; i<10; i++){
        printf("%d \t", tables[0][i]);
    }

    return 0;
}

void printTables(int arra[][10], int n, int m, int num){
    for (int i =0; i<=m; i++){
        arra[n][i] = num * (i+1);
    }
}