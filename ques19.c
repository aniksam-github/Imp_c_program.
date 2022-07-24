// program to swap two numbers using pointer variable (with using 3rd variable )
#include <stdio.h>
int main()
{
  int a, b, *i, *j, Temp;
  printf("\nPlease Enter the value of a and b\n");
  scanf("%d %d", &a, &b);
  printf("\nBefore Swap: a = %d  b = %d\n", a, b);
  i = &a;
  j = &b;
  Temp = *i;
  *i    = *j;
  *j    = Temp;
  printf("\nAfter Swapping: a = %d  b = %d\n", a, b);
  printf("\nAfter Swapping: i = %d  j = %d\n", *i, *j);
  return 0;
}