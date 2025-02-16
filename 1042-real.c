#include <stdio.h>

int main(){
	int matriz[3], max, min, med;
	scanf("%d %d %d", &matriz[0], &matriz[1], &matriz[2]);
	
	for(int i = 0; i < 3; i++){
		if(i==0){
			max = matriz[i];
			min = matriz[i];
		}
		else{
			if( matriz[i] > max)
				max = matriz[i];
			if(matriz[i] < min)
				min = matriz[i];
		}
	}
	
	for(int j = 0; j<3;j++){
		if( matriz[j] == max || matriz[j] == min)
			continue;
		else
			med = matriz[j];
	}
	printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",min,med,max,matriz[0],matriz[1],matriz[2]);
}
