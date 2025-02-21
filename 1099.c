#include <stdio.h>

int main(){
	int N,comeco,fim,soma = 0,ch=0;
	scanf("%d", &N);
	int matriz[N];

	for(int i = 0 ; i < N; i++){
		scanf("%d %d", &comeco, &fim);
		ch = comeco <= fim ? 1: 0;
		if( ch == 0){
			ch = comeco;
			comeco = fim;
			fim = ch;
		}
		for(comeco = comeco % 2 == 0 ? comeco + 1: comeco + 2 ; comeco < fim; comeco++){
			if(comeco %2 !=0)	
				soma += comeco;
				
		}
		matriz[i] = soma;
		soma = 0;
	}
	for(int j = 0; j < N; j++)
		printf("%d\n",matriz[j]);
		
	return 0;
}
