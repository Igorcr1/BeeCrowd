#include <stdio.h>
#include <stdlib.h>

int main(){
	int tempo,velocidade;
	float km, litros;
	scanf("%d %d", &tempo, &velocidade);
	km = tempo * velocidade;
	litros = km/12;
	printf("%.3f\n", litros);
}
