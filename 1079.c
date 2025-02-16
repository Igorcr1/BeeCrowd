#include <stdio.h>

int main(){
	int N;
	double P1,P2,P3,media;
	scanf("%d", &N);
	double matriz[N];

	for(int i = 0 ; i < N; i++){
		scanf("%lf %lf %lf", &P1, &P2, &P3);
		media = P1 * 0.2 + P2 * 0.3 + P3 * 0.5;
		matriz[i] = media;
	}
	
	for(int j = 0; j < N; j++)
		printf("%.1lf\n", matriz[j]);	
}

