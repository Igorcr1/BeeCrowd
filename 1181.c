#include <stdio.h>
#include <stdlib.h>

int main(){
	float M[12][12],soma = 0;
	int L;
	char T;
	scanf("%d %c", &L, &T);

	for(int i = 0; i < 12; i++)
		for(int j = 0; j < 12; j++)
			scanf("%f", &M[i][j]);

	if(T == 'S'){
		for(int i = 0; i < 12 ; i++)
			soma += M[L][i];
	             	printf("%.1f\n", soma);
	}else{ 
		for(int i = 0; i <12;i++)
			soma += M[L][i];
			printf("%.1f\n", soma/12);
	}
	
}
