#include<stdio.h>
#include<math.h>
/*Sem erros de sintaxe*/
static double factorial(double n)
{
  if (n < 2) return 1;
  return n * factorial(n-1);/*chama a propria função com um valor decrementado até chegar em 1*/
  
}

int rank(int *num, int siz)
{
  int i;

  if (siz < 1) return 0;

  for (i = 1; i < siz; i++)
    if (num[i] > num[0])
      num[i]--;

  return (num[0] - 1) * factorial(siz - 1) + rank(num+1, siz-1);
}
/*adicionado com o objetivo de teste*/
int main(){
	int V[5] ;
	int op;
 	printf("Escolha\nfatorial = 1\nrank = 2\n");
 	scanf("%d",&op);
 	if(op == 1) return	factorial(5);
 	if(op == 2) return  rank(V,5); 		
}
