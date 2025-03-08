#include <stdio.h>

int main(){
	int N[10],valor;
	scanf("%d", &valor);

	for(int i = 0; i < 10; i++){
		if(i== 0)
			N[i] = valor;
		else
			N[i] = 2*N[i-1];	
	}

	for(int i = 0; i < 10; i++){
		printf("N[%d] = %d\n", i, N[i]);
	}
}
