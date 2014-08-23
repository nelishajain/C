#include <stdio.h>

int main(int argc, char** argv)
{
  int c;
  c = getchar();
  printf("\n");
  if (c & (1 << 6))
    printf(" @@@ \n");
  else
    printf("     \n");
  if (c & (1 << 1))
    printf("@");
  else
    printf(" ");
  printf("   ");
  if (c & (1 << 5))
    printf("@\n");
  else
    printf(" \n");
  if (c & (1 << 1))
    printf("@");
  else
    printf(" ");
  printf("   ");
  if (c & (1 << 5))
    printf("@\n");
  else
    printf(" \n");
  if (c & (1 << 0))
    printf(" @@@ \n");
  else
    printf("     \n");
  if (c & (1 << 2))
    printf("@");
  else
    printf(" ");
  printf("   ");
  if (c & (1 << 4))
    printf("@\n");
  else
    printf(" \n");
  if (c & (1 << 2))
    printf("@");
  else
    printf(" ");
  printf("   ");
  if (c & (1 << 4))
    printf("@\n");
  else
    printf(" \n");
  if (c & (1 << 3))
    printf(" @@@ \n");
  else
    printf("     \n");
  printf("\n");
}
