#include <stdio.h>
/*IndirectThreading usa  ponteiros para locais que, por sua vez, apontam para um codigo de m�quina*/
/*Mais compacto que o DirectThreading*/
#define STKSIZ 20000
long stack[STKSIZ], *sp = stack;
typedef void **F;
F *ip;
void interp()
{
  static void *Integer_ = &&Integer_, *Add_ = &&Add_, *Exit_ = &&Exit_;
  F codigo[] = { &&Integer_, (F)3, &&Integer_, (F)5, &&Add_,  &&Exit_ };

#define NEXT goto ***ip++
  ip = codigo;
  NEXT;
  Integer_: *sp++ = (long)*ip++; NEXT;
  Add_: sp--; sp[-1] += sp[0]; NEXT;
  Exit_: printf("%d\n", sp[-1]); return;
}

