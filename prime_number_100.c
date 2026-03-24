#include <stdio.h>
int main()
{
  int n = 3, i;

  if(n < 2)
    print("%d is a not Prime Number!\n", n);

 for(n=3; n <= 100; n++)
 {
  for(i=2; i*i <= n; i++)
    if(n%i == 0)
      break; 

  if(i*i > n)
    printf("%d is a Prime Number!\n", n);
  else
    printf("%d is a not Prime Number!\n", n);
 }

  return 0;
}
