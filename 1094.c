#include <stdio.h>

int main(){
	int N,cobaias=0,coelhos=0,ratos=0,sapos=0;
	char opcao;
	
	scanf("%d", &N);

	for(int i = 1; i <= N; i++){
		scanf("%d %c", &cobaias, &opcao);
		if(opcao == 'C'){
			coelhos += cobaias;
		} else if( opcao == 'R')
			ratos += cobaias;
		else
			sapos += cobaias;
	}
	printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n", (coelhos+ratos+sapos), coelhos,ratos,sapos, ((coelhos*100.00)/(coelhos+sapos+ratos)), ((ratos*100.00)/(coelhos+sapos+ratos)), ((sapos*100.00)/(coelhos+sapos+ratos)));
}
