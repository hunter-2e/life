#include <stdio.h>

int global = 10;

main()
 {
printf("The global variable (data) address is %p\n", &global);
 int i;
 printf("The stack top is near %p\n", &i);
 int j;
printf("Adding to bss with variable j: %p", &j);


 return 0;
} 
