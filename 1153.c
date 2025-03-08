#include <stdio.h>

int main(){
	int N,facto = 1;
	scanf("%d", &N);

	for(; N >= 1; N--){
		facto *= N;
	}

	printf("%d\n", facto);
		
}
