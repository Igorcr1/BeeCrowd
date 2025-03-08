#include <stdio.h>

int main(){
	int valores = 15;
	int pares[5],impares[5],par=0,impar=0;
	int numeros;

	for(int i = 0 ; i < valores; i++){
		scanf("%d", &numeros);
		if( numeros % 2 == 0 ){
			pares[par] = numeros;
			if (par == 4){
				for(int k = 0; k < 5; k++)
					printf("par[%d] = %d\n", k , pares[k]);
					par = -1;
				}
			par++;
		} else {
			impares[impar] = numeros;
			if (impar == 4){
                                for(int k = 0; k < 5; k++)
                                        printf("impar[%d] = %d\n", k , impares[k]);
                                        impar = -1;
                                }
			impar++;

		}
	}

	for(int i =0; i < impar; i++)
		printf("impar[%d] = %d\n", i, impares[i]);

        for(int i =0; i < par; i++)
        	printf("par[%d] = %d\n", i, pares[i]);

}
