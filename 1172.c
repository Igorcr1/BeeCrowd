#include <stdio.h>

int main(){
	int x[10],valor;

	for(int i = 0 ; i < 10; i++){
		scanf("%d", &valor);
		if(valor <= 0)
			x[i] = 1;
		else
			x[i] = valor;
	}

	for(int i = 0; i<10;i++){
		printf("X[%d] = %d\n", i, x[i]);
	}
}
