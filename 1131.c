#include <stdio.h>

int main(){
	int inter= 0, gremio=0,jogadas[2],empates=0,val = 1;
	do{
		scanf("%d %d", &jogadas[0], &jogadas[1]);
		if(jogadas[0] > jogadas[1])
			inter += 1;
		else if (jogadas[1] > jogadas [0])
			gremio += 1;
		else
			empates += 1;
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &val);
	}while(val == 1);

	printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n",inter+gremio, inter,gremio,empates);
	if(inter > gremio)
		printf("Inter venceu mais\n");
	else if(gremio > inter)
		printf("Gremio venceu mais\n");
	else
		printf("Nao houve vencedor\n");

}
