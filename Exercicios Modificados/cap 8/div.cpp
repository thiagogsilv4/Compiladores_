#include <stdio.h>

int main(){
	
	int n = 0, d = 0;
	printf("calculo dos divisores de um numero\n");
	printf("Introduza um numero\n");
	
	scanf("%d",&n);
	if(n >0){
		int i = 2;
		while(i<= n/2){/*n/2 serve para o "i" n�o contar a condi��o de "n" ser divis�vel por ele mesmo dentre as op��es de divisores*/
			if(n % i== 0 ){/* se o numero escolhido entrar na condi��o o parametro d � modificado e o(s) divisor(es) s�o impressos*/
				printf("divisivel por %d\n", i);
				d = d + 1;
			}
			i = i + 1;
		}
	}
	if(d == 0){
		printf("primo");
	}
	return 0;
}
