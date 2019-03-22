#include <stdio.h>

#define MAX 15

int main()
{
  char buf[MAX+1];
  printf("Hello, world!\n");
  printf("What's your name? ");
  fgets(buf, MAX, stdin);
  printf("Hi, %s",buf);
  return 0;
}
