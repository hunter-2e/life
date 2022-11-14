#include <stdio.h>

char ga[] = "abcdefghijklmnopqrstuvwxyz";

int main(){
    void one(char ca[]);
    void two(char* pa);

    char arr[6] = "Hello";
    char* charac = "H";

    one(arr);
    two(charac);

    one(ga);
    two(ga);

    printf("%p\n", &ga);
    printf("%p\n", &(ga[0]));
    printf("%p\n\n", &(ga[1]));
}

void one(char ca[]){
    printf("%p\n", &ca);
    printf("%p\n", &(ca[0]));
    printf("%p\n\n", &(ca[1]));
}

void two(char* pa){
    printf("%p\n", &pa);
    printf("%p\n", &(pa[0]));
    printf("%p\n", &(pa[1]));
    printf("%p\n\n", ++pa);
}
