#include <stdio.h>

static int x = 12;

/*extern int y;o uso do extern � implicito, quando � usado ocm uma vari�vel ela � somente declarada, mas n�o definida*/
static int y;/*vari�vel declarada. O uso do static preserva o valor da vari�vel quando essa est� fora do seu escopo*/

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
