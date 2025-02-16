#include <stdio.h>
#include <math.h>

int main(){
	double a,b,c, raiz;

	scanf("%lf %lf %lf", &a, &b, &c);
	
	raiz = (b * b) - 4 * a* c;
	
	if(raiz>0 &&  a != 0){
		raiz = sqrt(raiz); 
		printf("R1 = %.5lf\nR2 = %.5lf\n", (-b+raiz)/(2*a), (-b-raiz)/(2*a));
	}
	else
		printf("Impossivel calcular\n");
}
