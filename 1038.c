#include <stdio.h>

int main(){
	int i,j;
	double soma;
	scanf("%d %d", &i, &j);

	if(i == 1)
		printf("Total: R$ %.2lf\n", (double) 4 * j);
	else if(i == 2)
                printf("Total: R$ %.2lf\n", (double) 4.5 * j);
	else if(i == 3)
		printf("Total: R$ %.2lf\n", (double) 5 * j);
	else if(i == 4)
                printf("Total: R$ %.2lf\n", (double) 2 * j);
	else if(i == 5)
                printf("Total: R$ %.2lf\n", (double) 1.5 * j);

}
