#include <stdio.h>

int main(){
	int x = 2002,y;
	scanf("%d", &y);

	if(x == y)
		printf("Acesso Permitido\n");
	else{
		printf("Senha Invalida\n");
		while( x != y){
			scanf("%d", &y);
			if(x==y){
				printf("Acesso Permitido\n");
			}else{
				printf("Senha Invalida\n");
		}}
}
}
