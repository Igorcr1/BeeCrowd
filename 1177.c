#include <stdio.h>

int main(){
	int T;
	int N[1000];

	scanf("%d", &T);
	for(int i = 0, j = 0 ; i < 1000; i++,j++){
		N[i] = j;
		if(j == T-1)
			j = -1;
		printf("N[%d] = %d\n", i, N[i]);
	}
}
