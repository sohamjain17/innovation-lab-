#include <stdio.h>
 
int main()
{
  int n, sum = 0, i, value;
 
  printf("Enter the value of n \n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (i = 1; i <= n; i++)
  {
    scanf("%d", &value);
    sum = sum + value*value;
  }
 
  printf("Sum of squares of the integers = %d\n", sum);
 
  return 0;
}
