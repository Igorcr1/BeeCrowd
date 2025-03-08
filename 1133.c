#include <stdio.h>

int main(){
	int x,y,t;
	
	scanf("%d %d", &x, &y);

	if(x>y){
		t = x;
		x= y;
		y = t;
	}

	for(x++; x< y; x++){
		if( x % 5 == 2 || x % 5 == 3)
			printf("%d\n", x);
	}
}
