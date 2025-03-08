#include <stdio.h>

int main(){
	long double X,N[100];

	scanf("%Lf", &X);

	for(int i = 0 ; i < 100; i++){
		if(i == 0)
			N[i] = X;
		else 
			N[i] = N[i-1]/2;
		printf("N[%d] = %.4Lf\n", i, N[i]);
	}
}
