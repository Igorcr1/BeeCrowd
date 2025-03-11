#include <stdio.h>
#include <stdlib.h>

int main(){
	int C;
	char T;
	float M[12][12],soma=0;

	scanf("%d %c", &C, &T);

	for(int i = 0 ; i < 12; i++){
		for(int j = 0; j < 12; j++){
			scanf("%f", &M[i][j]);
			if(j == C)
				soma += M[i][j];

		}
	}
	if(T == 'S')
		printf("%.1f\n", soma);
	else
		printf("%.1f\n", soma/12);
}
