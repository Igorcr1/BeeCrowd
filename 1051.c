#include <stdio.h>

int main(){
	double salario,A,B,C,D;
	scanf("%lf", &salario);

	B = salario - 2000;
	C = salario - 3000;
	D = salario - 4500;

	if(salario>0 && salario <= 2000.00)
		printf("Isento\n");
	else if(salario>= 2000.01 && salario <= 3000)
		printf("R$ %.2lf\n", B*0.08);
	else if(salario >= 3000.01 && salario <= 4500)
		printf("R$ %.2lf\n", 1000*0.08+C*0.18 );
	else
		printf("R$ %.2lf\n",1000*0.08+1500*0.18+ D*0.28);








}
