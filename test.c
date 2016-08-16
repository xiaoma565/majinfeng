#include <stdio.h>

#define TEST

int main()
{
#ifdef TEST
  printf("hello\n");
#endif
  printf("hihi\n");

  return 0;
}
