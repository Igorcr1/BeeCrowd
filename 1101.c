#include <stdio.h>

int main(){
	int Maior,Menor,soma=0;
	scanf("%d %d", &Maior, &Menor);

	do{
		if(Maior <= 0 || Menor <= 0)
			break;
		if(Maior>Menor){
			for(; Menor <= Maior; ++Menor){
				soma += Menor;
				printf("%d ",Menor);
		}
		}else{
                        for(; Maior <= Menor; Maior++){
                                soma += Maior;
                                printf("%d ",Maior);
                }
                }
		printf("Sum=%d\n",soma);
		soma = 0;
		scanf("%d %d", &Maior,&Menor);
	} while (Maior >0 && Menor >0);

}
