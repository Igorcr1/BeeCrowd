#include <stdio.h>

int main(){
	double notaum,notadois,media;
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

}
