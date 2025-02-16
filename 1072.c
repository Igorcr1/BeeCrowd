#include <stdio.h>

int main(){
	int num,valor=0,in=0,out=0;
	scanf("%d",&num);

	for(int i = 0;i < num;i++){
		scanf("%d", &valor);
		if(valor >= 10 && valor <= 20)
			++in;
		else
			++out;
	}
	printf("%d in\n%d out\n", in, out);
}
