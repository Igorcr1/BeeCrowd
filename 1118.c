#include <stdio.h>

int main(){
	double notaum,notadois,media;
	int m = 1;


	while(m == 1){
		do{
			scanf("%lf", &notaum);
			if(notaum < 0 || notaum > 10)
				printf("nota invalida\n");
		}while(notaum <0 || notaum > 10);

		do{
                	scanf("%lf", &notadois);
                	if(notadois < 0 || notadois > 10)
                        	printf("nota invalida\n");
        	}while(notadois <0 || notadois > 10);

		media = (notaum+notadois)/2;
		printf("media = %.2lf\n", media);
		printf("novo calculo (1-sim 2-nao)");

		scanf("%d", &m);
		while(m != 1 && m != 2){
			printf("novo calculo (1-sim 2-nao)");
			scanf("%d", &m);
			}
	}
}

