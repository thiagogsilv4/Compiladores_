#include<stdio.h>
/*A função está correta, só precisa ser chamada na main*/
 int find(int *vec, int max, int val)
  {
    int i, x = 0;
    for (i = 0; i < max; i++) {
      x += vec[i];
      if (x > val)
        return i;
    }
    return -1;
  }
  

