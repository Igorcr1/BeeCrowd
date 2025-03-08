#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	long int m[45] = {0,1}, N;
	
	scanf("%ld", &N);

	for(int i = 0; i < N; i++){
		if(i == 0 || i == 1){
			printf("%d ", i);
		}
		else{
			m[i] = m[i-2] + m[i-1];
			if(i+1 == N)
				printf("%ld", m[i]);
			else
				printf("%ld ", m[i]);
	}
		
	}
	printf("\n");
}
