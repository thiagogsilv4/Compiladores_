#include<stdio.h>/*inclusão da biblioteca padrão de entrada e saida*/
#include<stdlib.h>/*inclusão da stdlib para o exit*/
#include <setjmp.h>

jmp_buf env;

void func()
{
  int raise = 0;
  printf("raise value (<=0, no raise): ");
  scanf("%d", &raise);
  if (raise > 0)
  	longjmp(env, raise);
  printf("no raise\n");
}

/*pode-se resolver retirando o exit ou adicionando a stdlib*/

main(int argc, char *argv[])
{
  int val;

  printf("start\n");
  switch (val = setjmp(env)) {
    case -1: perror("setjmp"); exit(2); 
    case 0: /* init */
    	printf("try\n");
        func();
        break;
    default:
        printf("catch = %d\n", val);
  }
  printf("end\n");
}
