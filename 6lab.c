#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

void fill(int n, int a[])
{
      for ( int i = 0; i < n; i ++)
      a[i] =rand()%100+1;
}
bool isPrime(int n)
{
      if (n == 1 || n ==2)
          return true;
      else {
          for (int i = 2; i < n; i++)
              if(n%i == 0)
                  return false;

          return true;
      }
}
void check(int k, int n, int a[])
{
    if (k >= 3)
    {
        printf("\nIndexes of prime numbers: ");
        for (int i = 0; i < n; i ++)
        {
            if (isPrime(a[i]))
                printf("%d  ", i);
        }
    }
    int buff,buff1;
    if (k == 2)
    {
        printf("\n");
        for (int i = 0; i < n; i ++)
        {
            if (isPrime(a[i]))
            {
                buff=i;
                break;
            }
        }
        for (int i = buff+1; i < n; i ++)
        {
            if (isPrime(a[i]))
            {
                buff1 = a[i];
                a[i] = a[buff];
                a[buff] = buff1;
                break;
            }
        }
        for (int i = 0; i < n; i ++)
        {
            printf("%d   ", a[i]);
        }
    }
    if (k == 1)
    {
      for (int i = 0; i < n; i ++)
      {
          if (isPrime(a[i]))
              printf("\nPrime number: %d  ", a[i]);
      }
    }
}
int main()
{
      srand(time(0));
      int n,k = 0;
      printf("Enter n -> ");
      scanf("%d", &n);
      int A[n];
      fill(n, A);
      for (int i = 0; i < n; i ++)
          printf("%d   ", A[i]);
      for (int i = 0; i < n; i ++)
      {
          if (isPrime(A[i]))
              k++;
      }
      check(k,n,A);
      printf("\nCount of prime numbers: %d   ", k);
      return 0;
}
