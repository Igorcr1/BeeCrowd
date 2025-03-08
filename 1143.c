#include <stdio.h>

int main(){
	int n,soma=1;
	scanf("%d", &n);

	for(int i = 1; i <= n;i++){
		printf("%d %d %d\n",i, i*i, i*i*i);
	}
}
