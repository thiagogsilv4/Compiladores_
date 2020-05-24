/*Inclusão das bibliotecas necessárias*/
#include<stdio.h>
#include<math.h>
/*programa não roda propriamente*/
double polinomio(double x, int sz, double pol[])
{
  int i;
  double ret = pol[0];

  for (i = 1; i < sz; i++) {
    ret += pol[i] * x;
    x *= x;
    printf("%d",pol[i]);
  }
  
  return ret;
}

int main(){
	int sz = 5;
	double v[5] = {1,2,3,4,5};
	return polinomio(2,sz,v);
}
