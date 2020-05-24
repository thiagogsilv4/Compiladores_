#include <stdio.h>
/*Endere�os da thread s�o de linguagem de m�quina na DirectThreading. Futuros par�metros precisam ser carregados indiretamente da mem�ria*/
#define STKSIZ 20000
long stack[STKSIZ], *sp = stack;
typedef void (*F)(void);

F *ip;
void interp()
{
  F codigo[] = { &&Integer, (F)3, &&Integer, (F)5, &&Add,  &&Exit }; /*Operador errado*/

#define NEXT goto **ip++
  ip = codigo;
  NEXT;
  Integer: *sp++ = (long)*ip++; NEXT;/*Cast de tamanho diferente*/
  Add: sp--; sp[-1] += sp[0]; NEXT;
  Exit: printf("%d\n", sp[-1]); return;
}

int main(){
	interp();
	return 0;
}

