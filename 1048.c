#include <stdio.h>

int main(){
	double salario,ajuste;
	scanf("%lf", &salario);
	
	salario >= 0 && salario <= 400 ? ajuste = 0.15* salario:
		salario >= 400.01 && salario <= 800 ? ajuste = 0.12*salario:
		salario >= 800.01 && salario <= 1200 ? ajuste=0.1*salario:
		salario >= 1200.01 && salario <= 2000 ? ajuste=0.07*salario:
		salario >= 2000 ?  0.04 * salario: 0;
	
	printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %.2lf %\n", salario+ajuste, ajuste, (((salario+ajuste)/salario)*100)-100);
}
