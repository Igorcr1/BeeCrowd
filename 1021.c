#include <stdio.h>
#include <stdlib.h>

int main(){
	int cedulas[] = {100,50,20,10,5,2};
	float moedas[] = {1,0.50,0.25,0.10,0.05,0.01};
	float qtd;
	scanf("%f", &qtd);
	
	printf("NOTAS:\n");
	for(int i = 0; i < 6; i++){
		printf("%d nota(s) de R$ %d.00\n", (int) qtd/cedulas[i], cedulas[i] );
		qtd -= ((int) qtd/cedulas[i]) * cedulas[i] ;
	}

	printf("MOEDAS:\n");
	for(int j=0; j < 6; j++){
		printf("%d moedas(s) de R$ %.2f\n", (int)(qtd/moedas[j]), moedas[j]);
		qtd -= ((int) (qtd/moedas[j])) * moedas[j];
		qtd += 0.001;
	}

}
