#include <stdio.h>

int *getRandom(i)
{
  int *ptr = &i;
  return ptr;
}

int exitCode()
{
  char str[10];
  printf("enter any character to exit ... ");
  scanf('%s', str);
  return 1;
}
int main(void)
{
  int i, *p;
  i = 100;
  p = getRandom(i);
  printf('printing the integer %d', *(p));
  printf('printing the address of the variable', p);
}