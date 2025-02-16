#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);

	num == 1 ? printf("January\n") : num == 2 ? printf("February\n") : num == 3 ? printf("March\n") : num == 4 ? printf("April\n") : num == 5 ? printf("May\n") : num == 6 ? printf("June\n") : num == 7 ? printf("July\n") : num == 8 ? printf("August\n") : num == 9 ? printf("September\n") : num == 10 ? printf("October\n") : num == 11 ? printf("November\n") : printf("December\n");
}
