#include <stdio.h>
#include <time.h>

int main(){
	int N;
	scanf("%d", &N);

	int X[N],contador=0,menor,pos=0;
	for(; contador < N; contador++){
		scanf("%d", &X[contador]);
		if(contador == 0)
			menor = X[contador];
		else
			if(X[contador] < menor){
				menor = X[contador];
				pos = contador;
			}
	}
	printf("Menor valor: %d\nPosicao: %d\n", menor, pos);	
}
