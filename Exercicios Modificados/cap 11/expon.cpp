#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Sem erros de compila��o, mas sem main*/
double expon(double x, int iter)
{
  int i;
  double exp = 0, fact = 1;

  for (i = 0; i <= iter; i++, fact *= i)
    exp = exp + pow(x,i) / fact;
  return exp;
}
