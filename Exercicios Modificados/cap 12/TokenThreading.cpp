#include<stdio.h>/*biblioteca padr�o de entrada e sa�da*/
/*TokenThreading usa listas de 8 ou 12 bits indexes para uma tabela de ponteiros. N�o precisa de muito esfor�o do programador para ser compacta*/
#define STKSIZ 20000
long stack[STKSIZ], *sp = stack;
#define INTEGER 1
#define ADD     2
#define EXIT    3

typedef int F;
F *ip;
#define NEXT break
void interp()
{
  F codigo[] = { INTEGER, 3, INTEGER, 5, ADD, EXIT };
  
  ip = codigo;
  for (;;)
    switch (*ip++) {
      case INTEGER: *sp++ = (long)*ip++; NEXT;
      case ADD: sp--; sp[-1] += sp[0]; NEXT;
      case EXIT: printf("%d\n", sp[-1]); return;
    }
}
