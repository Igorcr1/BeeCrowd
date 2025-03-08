#include <stdio.h>


int main(){
	int N[20],ch= 0,j=19;
	
	
	for(int i = 0; i < 20; i++){
		scanf("%d", &N[i]);
	}
	
	for(int i = 0; i < 10; i++){
		ch = N[i];
		N[i] = N[j];
		N[j] = ch;
		j--;
	}

        for(int i = 0; i < 20; i++){
		printf("N[%d] = %d\n", i, N[i]);
        }

}
