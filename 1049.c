#include <stdio.h>
#include <string.h>

/* Em C nao podemos comparar string sem importar ?
 */

int main(){
	char vertebras[20],tipo[20],come[20];
	scanf("%s %s %s", vertebras, tipo, come);

	if(strcmp(vertebras, "vertebrado") == 0){
		if(strcmp(tipo, "ave") == 0) {
				if(strcmp(come,"carnivoro") == 0)
					printf("aguia\n");
				else
					printf("pomba\n");
					}
		if(strcmp(tipo, "mamifero") == 0) {
				if(strcmp(come,"onivoro") == 0)
					printf("homem\n");
				else
					printf("vaca\n");
		}
	}
	else 
		if(strcmp(tipo, "inseto") == 0) {
			if(strcmp(come, "hematofago") == 0)
				printf("pulga\n");
			else
				printf("lagarta\n");
		}
		else {
		
			if(strcmp(come,"hematofago") == 0)
				printf("sanguessuga\n");
			else
				printf("minhoca\n");
	
						 }
}
