#include <stdio.h>

int main(){
	int n,soma=0;

	scanf("%d", &n);

	for(int i = 1; i <= n; i++){
		for(int j = 0; j < 4; j++){
			soma += 1;
			if(j == 3)
				printf("PUM");
			else
				printf("%d ", soma);
		}
		printf("\n");
	}

}
