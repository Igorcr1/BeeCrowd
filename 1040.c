#include <stdio.h>

int main(){
	float a,b,c,d,media;
	float e,media2;
	scanf("%f %f %f %f", &a, &b, &c, &d);

	media =  a*0.2+b*0.3+c*0.4+d*0.1;
	if(media >= 7)
		printf("Media: %.1f\nAluno aprovado.\n", media);
	else if(media >= 5 && media <= 6.9)
	{
		scanf("%f", &e);
		media2 = (media + e)/2;
		if(media2 >= 5) {
                	printf("Media: %.1f\nAluno em exame.\n", media);
			printf("Nota do exame: %.1f\nAluno aprovado.\nMedia final: %.1lf\n", e, media2);
		}
		else{
                	printf("Media: %.1f\nAluno em exame.\n", media);
                        printf("Nota do exame: %.1f\nAluno reprovado.\nMedia final: %.1lf\n", e, media2);
		}
	}
	else
                printf("Media: %.1f\nAluno reprovado.\n", media);

		
	
}
