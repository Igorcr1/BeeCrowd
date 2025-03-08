#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	double N = 0, soma = 0;
	double contador = 0;

	do{
		scanf("%lf", &N);
		if(N>0){
			soma += N;
			contador += 1;
		}
		else
			continue;
	}while(N > 0);

	printf("%.2lf\n", (soma/contador));
}
