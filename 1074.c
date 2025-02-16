#include <stdio.h>

int main(){
	int N, valor, even = 0, odd = 0, positive = 0, negative = 0;
	scanf("%d", &N);

	for(int i = 0; i < N; i++){
		scanf("%d", &valor);
		if(valor == 0){
			printf("NULL\n");
		} else if(valor % 2 == 0) {
			printf("EVEN ");
			if(valor > 0)
				printf("POSITIVE\n");
			else
				printf("NEGATIVE\n");
		}else {
			printf("ODD ");
			if(valor >0)
				printf("POSITIVE\n");
			else
				printf("NEGATIVE\n");
		}
	}
}
