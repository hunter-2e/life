#include<stdio.h>
#include "mylib.h"
int calculateSum(int num);

int main() {
    int num;
    int result;

    printf("Input number = ");
    scanf("%d", &num);

    result = calculateSum(num);
    printf("\nResult from 1 to %d = %d", num, result);

    return (0);
}

