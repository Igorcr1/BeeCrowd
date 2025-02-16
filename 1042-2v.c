#include <stdio.h>

int main(){
	int matriz[3],condicional,ord[3];
	scanf("%d %d %d", &matriz[0], &matriz[1],&matriz[2]);

	for(int i = 0;i <3; i++) {
		condicional = 0;
		for(int j =0; j<3; j++) {
			if (i == j)
				continue;
			else if ( matriz[i] > matriz[j])
				condicional += 1;
		}
		ord[condicional] = matriz[i];
	}
	printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", ord[0],ord[1],ord[2],matriz[0],matriz[1],matriz[2]);
}
