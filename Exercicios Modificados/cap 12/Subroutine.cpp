#include<stdio.h>/*Bibliotecas necess�rias foram declaradas*/
#include<stdlib.h>
/*Define e parametros globais movidos para cima*/
/*Subroutine threading consiste em uma serie de chamadas de instru��es de linguagem de m�quina. Usado em compiladores mais antigos : Cobol,Fortran,ALGOL*/
#define STKSIZ 20000
long stack[STKSIZ], *sp = stack;
typedef void (*F)(void);
F *ip;
void Integer() { *sp++ = (long long)*ip++;; }/*Alterado o tamanho da vari�vel*/
void Add() { sp--; sp[-1] += sp[0]; }
void Exit() { printf("%d\n", sp[-1]); exit(0); }



void interp()
{
  F codigo[] = { Integer, (F)3, Integer, (F)5, Add, Exit };
  
  ip = codigo;
  while (1)
    (*ip++)();
}
