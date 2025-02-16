#include <stdio.h>

int main(){
	int numero, maior,pos;

	for(int i=1; i <= 5; i++){
		scanf("%d",&numero);
		if(i==1){
			maior = numero;
			pos = i;
		} else if(numero > maior){
			maior = numero;
			pos = i;
		}

	}
	printf("%d\n%d\n", maior, pos);
}
