#include <stdio.h>
int main()
{
  printf("hello World!/n");
  int c;
  while((c = getchar()) != 'q'){ putchar(c);}
  return 0;
}
