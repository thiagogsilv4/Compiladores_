#include<stdio.h>/*Inclusão da Biblioteca padrão de entrada e saída*/
/*De acordo com o PDF*/
int func() {/*retorna o valor de x multiplicado por 2 a cada ciclo de chamada*/
  static int x = 12;
  x *= 2;
  return x;
}

int main() {
  printf("%d %d %d\n", func(), func(), func());
  return 0;
}
