#include <stdio.h>

int main(){
	int a,b;
	int valor;
	scanf("%d %d", &a, &b);

	a % b == 0 ? printf("Sao Multiplos\n") : b % a == 0 ? printf("Sao Multiplos\n") : printf("Nao sao Multiplos\n"); 
}
