#include <stdio.h>

int main(){
	int hi,hf,horas;
	scanf("%d %d", &hi, &hf);

	if(hf > hi)
		horas = hf - hi;
	else if(hi > hf)
		horas = (24-hi)+hf;
	else
		horas = 24;

	printf("O JOGO DUROU %d HORA(S)\n", horas);
}
