#include <stdio.h>

int main(){
        int a,inteiro;
        scanf("%d",&a);
	
	inteiro = a/2;

        for(int i = 0; i <= 5 ; i++)
                printf("%d\n", ((inteiro+i)*2)+1);
}

