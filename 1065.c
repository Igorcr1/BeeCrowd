#include <stdio.h>

int main(){
	int a,pares = 0;

	for(int i = 0; i< 5; i++){
		scanf("%d", &a);
		if(a % 2 == 0)
			++pares; 
	}
	printf("%d valores pares\n", pares);
}
