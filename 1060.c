#include <stdio.h>

int main(){
	float a;
	int pos=0;

	for(int i=0; i <6; i++){
		scanf("%f",&a);
		if(a>0)
			pos += 1;
	}
	printf("%d valores positivos\n", pos);
}
