#include<stdio.h>

int calculateSum(int);

int main() {
    int num;
    int result;

    printf("Input number = ");
    scanf("%d", &num);

    result = calculateSum(num);
    printf("\nResult from 1 to %d = %d", num, result);

    return (0);
}

int calculateSum(int num) {
    int res;
    if (num == 1) {
        return (1);
    }
    else {
        res = num + calculateSum(num - 1);
    }
    return (res);
}
