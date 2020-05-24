#include <stdio.h>
#include <math.h>
/*função não para de receber valores na sua forma original*/
int main()
{
  int xm, x2m, n, x;

  xm = x2m = n = 0;
  int maximo;
  scanf("%d",&maximo);/*parâmetro para a função não rodar eternamente*/
  while (n < maximo) {/*mudança feita em scanf("%d", &x) > 0*/
  	scanf("%d", &x);
    n++;
    xm += x;
    x2m += x*x;
  }
  printf("%d %g %lg\n", n, xm/((float)n),
         sqrt((x2m - xm*xm/((double)n))/((double)n)));
  return 0;
}
