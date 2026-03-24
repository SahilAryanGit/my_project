dsadiadisalkljdjasdjsaljld
#include <stdio.h>
int main()
{
  int n, i;

  print("Enter the num: \n");
  scanf("%d", &n);

  if(n < 2)
    print("%d is a not Prime Number!\n", n);

  for(i=2; i*i <= n; i++)
    if(n%i == 0)
      break; 

  if(i*i > n)
    print("%d is a Prime Number!\n", n);
  else
    print("%d is a not Prime Number!\n", n);


  return 0;
}
