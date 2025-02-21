#include <stdio.h>

int main(){
	int x=0,y=0,i;
	double div;
	scanf("%d ", &i);
	for(; i > 0 ; i-- ){
		scanf("%d %d", &x, &y);
		if( y == 0)
			printf("divisao impossivel\n");
		else{
			div = (double) x/y;
			printf("%.1lf\n", div);
		}
	}
}
