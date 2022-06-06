#include <stdio.h>
int main()
{
  printf("Enter your number to find primes less than that number\n");
  int i,j,n;
  scanf("%d",&n);

    printf("Prime numbers are\n");
    for(i=2; i<n; i++)
    {
        int is_prime = 1;
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
              is_prime=0;
            }
        }

       if (is_prime == 1)
        {
            printf("%d ",i);
        }
    }
} 