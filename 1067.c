#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);

	for(int i = 1; i <= a ; i+= 2)
		if(i % 2 != 0)
			printf("%d\n", i);
}
