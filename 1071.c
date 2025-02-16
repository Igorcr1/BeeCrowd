#include <stdio.h>

int main(){
        int x,y,soma=0,ch=0;

        scanf("%d %d",&x, &y);
	
	if(x>y){
		ch = x;
		x = y;
		y = ch;
	}	
	x+=1;

	for(x; x < y; x++){
		if(x % 2 != 0)
		       soma += x;
	}
	printf("%d\n",soma);
}
