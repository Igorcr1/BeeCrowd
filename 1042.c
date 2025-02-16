#include <stdio.h>

int main(){
	float a,b,c;
	float contas;

	scanf("%f %f %f", &a, &b, &c);
	
	if(a < b+ c && b < a+c && c < b+a){
		contas = a+b+c;
		printf("Perimetro = %.1f\n", contas);
	}
	else{
		contas = ((a+b)*c)/2;
		printf("Area = %.1f\n",contas);
	}

}
