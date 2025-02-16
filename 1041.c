#include <stdio.h>

int main(){
	float x,y;

	scanf("%f %f", &x, &y);
	x==0 && y != 0 ? printf("Eixo Y\n"): 
		x !=0 && y==0 ? printf("Eixo X\n") :
		x==0 && y == 0 ? printf("Origem\n"):
		x > 0 && y>0 ? printf("Q1\n") :
	       	x<0 && y > 0 ? printf("Q2\n"):
	       	x<0 && y<0 ? printf("Q3\n"): 
		printf("Q4\n"); 
}
