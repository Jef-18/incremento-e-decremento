#include <stdio.h>

int main()
{
  int num = 0;
  printf("\n Pós-incremento:  %i", num++);
  printf("\n Pré-incremento:  %i", ++num);

  num = 0;
  printf("\n Pós-decremento:  %i", num--);
  printf("\n Pré-decremento:  %i", --num);
}
