#include <stdio.h>
#include <stdlib.h>

int main(){
	char O;
	double M[12][12],soma=0,contador=0;

	scanf("%c", &O);

	for(int i = 0 ; i < 12; i++){
		for(int j = 0; j < 12; j++){
			scanf("%lf", &M[i][j]);
			if(i+j > 11 && i > j){
				soma += M[i][j];
				contador++;
			}

		}
	}
	if(O == 'S')
		printf("%.1f\n", soma);
	else
		printf("%.1f\n", soma/contador);
}
