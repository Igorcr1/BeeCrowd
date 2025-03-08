#include <stdio.h>

int main(){
	int x,y,t,soma = 0;

	scanf("%d %d", &x, &y);
	if(x>y){
		t = x;
		x=y;
		y = t;
	}

	for(; x <= y; x++){
		if(x% 13 == 0)
			continue;
		else
			soma += x;	
	}
	printf("%d\n", soma);
}
