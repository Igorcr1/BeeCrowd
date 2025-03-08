#include <stdio.h>

int main(){
	int N,x,ct=0;

	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		scanf("%d",&x);
		for(int j = 2; j < x; j++){
			if(x % j == 0)
				ct = 1;
		}
		if(ct == 1)
			printf("%d nao eh primo\n", x);
		else
			printf("%d eh primo\n", x);

		ct = 0;
	}
}
