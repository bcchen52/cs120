// Name: Brian Chen
#include <stdio.h>

int main()
{
  int a, b;

  printf("Enter two decimal or hexadmical numbers: ");
  scanf("%i %i", &a, &b);

  printf("bitwise a AND b: 0x%x\n", a & b);
  printf("bitwise a OR b 0x%x\n", a | b);
  printf("shift 'a' one bit left: 0x%x\n", a << 1);
  printf("shift 'b' one bit right: 0x%x\n", b >> 1);
}
