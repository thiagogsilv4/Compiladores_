#include<stdio.h>/*inclus�o da biblioteca padr�o de entrada e sa�da*/
/*a cada ciclo multiplica-se o valor de x por 2*/
int func() {
  static int x = 12;
  x *= 2;
  return x;
}

int main() {
  printf("%d %d %d\n", func(), func(), func());
  return 0;
}
