#include <stdio.h>

int main(){
	int valor;
	for(int i = 1; i <= 9; i+= 2){
		if(i==1)
			valor = 7;
		else
			valor += 2;
		for(int j = 0; j <= 2; j++){
			printf("I=%d J=%d\n",i, valor-j);
		}
	}
}
