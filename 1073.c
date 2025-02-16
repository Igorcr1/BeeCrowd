#include <stdio.h>

int main(){
	int num = 0;
	scanf("%d",&num);

	for(int i = 2; i <= num; i += 2)
		printf("%d^2 = %d\n",i,i*i);
}
