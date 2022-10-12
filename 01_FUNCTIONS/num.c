//Compute sum of conseq int
//git tracks
#include <stdio.h>

int main(int argc, char* argv[]){
int total = 0;
int N;
printf("Enter number: ");
scanf("%d", &N);
for(int i = 0; i <= N; i++){
total += i;
}

printf("%d", total);
return total;

}
