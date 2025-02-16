#include <stdio.h>

int main(){
	float a,media=0;
	int pos=0;

	for(int i=0; i <6; ++i){
		scanf("%f",&a);
		if(a>0){
			media += a;
			pos += 1;
		}
		if(i==5){
			media = media/pos;
		}
	}
	printf("%d valores positivos\n%.1f\n", pos,media);
}

