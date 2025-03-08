#include <stdio.h>

int main(){
	int A,N,soma=0;

	scanf("%d ",&A);
	do{
		scanf("%d",&N);
		for(int i = 0; i<= N-1; i++)
			soma += A+i;

	}while(N <= 0);

	printf("%d\n", soma);
}
