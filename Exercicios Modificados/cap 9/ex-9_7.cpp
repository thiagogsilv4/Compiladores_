#include <stdio.h>
int func(int arg) {
  int *args = &arg;

  printf("%d %d %d\n", args[0], args[1], args[2]);
  return arg + args[0];
}
/*Adicionada main*/
/*
int main(){
	int x = 1;
	func(x);
	return 0;
}*/

/*9_7a*/
/*int main() {
  printf("%d\n", func(1230));//somente um argumento inteiro
  return 0;
}*/

/*9_7c*/
/*
int main() {
  printf("%d\n", func(12.3E5));//somente um argumento
  return 0;
}*/
