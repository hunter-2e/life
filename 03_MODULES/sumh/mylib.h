#ifndef mylib_h__
#define mylib_h__
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
#endif
