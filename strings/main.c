#include <stdio.h>
#include <string.h>
void exitcode();
int main(void)
{
  printf("tumao naam ka hai\n");
  char name[40];
  scanf("%39s", name);
  printf("Hello %s, Welcome to My world!!\n", name);
  printf("%d this is the size of your name\n", sizeof(name));
  int arr[5]={1,2,3,4,5};
 // changeArr();

  //exit code
  exitcode();
  return 0;
}

void exitcode()
{
  char something[10];
  printf("type something to exit the code");
  scanf("%s", something);
}