#include <stdio.h>

int main(){
	double T,N,fib[60]= {0,1};

	scanf("%lf", &T);
	for(int i =0; i < T; i++){
		scanf("%lf", &N);
		for(int j = 2; j <= N; j++){
			fib[j] = fib[j-2]+fib[j-1];
			if(j == N)
				printf("Fib(%d) = %.0lf\n", j, fib[j]);
		}
		if(N == 0 || N == 1)
			printf("Fib(%.0lf) = %.0lf\n", N, fib[(int)N]);
		}
}
