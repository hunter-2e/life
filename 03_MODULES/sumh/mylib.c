#include<stdio.h>

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
