#include <stdio.h>

int main(){
	int alcool=0,gas=0,diesel=0,value=0;

	do{
		scanf("%d", &value);
		if(value == 1)
			alcool +=1;
		else if(value == 2)
			gas += 1;
		else if(value == 3)
			diesel +=1;
		else if(value == 4)
			value == 4;
		else
			continue;
	}while(value != 4);

	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",alcool,gas,diesel);
}
