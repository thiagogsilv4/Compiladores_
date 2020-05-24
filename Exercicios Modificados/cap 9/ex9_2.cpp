#include <stdio.h>
struct x {
  char type;
  int  count;
  short size;
  double value;
  char swap[2];
  float number;
};

struct y {
  char type;
  short size;
  char swap[2];
  int  count;
  float number;
  double value;
};

struct z {
  char type;
  int  count;
  short size;
  double value;
  char swap[2];
  float number;
} __attribute__ ((packed)); /* gcc only *//*Remove os espaços entre dados, "alinhando os dados na memória"*/


main() { printf("%d %d %d\n", sizeof(struct x),  sizeof(struct y),  sizeof(struct z)); return 0; }
