#include <stdio.h>

static int x = 12;

/*extern int y;o uso do extern é implicito, quando é usado ocm uma variável ela é somente declarada, mas não definida*/
static int y;/*variável declarada. O uso do static preserva o valor da variável quando essa está fora do seu escopo*/

int func(int y) {
    static int x;

    printf("x=%d\n", x);
    return x += y;
}

int main() {
  func(5);
  func(x);
  func(y);

  return 0;
}
