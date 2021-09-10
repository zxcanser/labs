#include <stdio.h>
#include <math.h>
int main()
{
  int b1, b2, b3;
  float rez;
  rez=0;
  printf("Enter b1 -> ");
  scanf("%d", &b1);
  printf("Enter b2 -> ");
  scanf("%d", &b2);
  printf("Enter b3 -> ");
  scanf("%d", &b3);
  if ((b1<b2) && (b1<b3))
  {
    if (b1 % 2 == 0)
    {
    rez=1.0f/b1;
    printf("%.1f", rez);
    }
    else
    printf("1");
  }
  if ((b2<b1) && (b2<b3))
  {
    if (b2 % 2 == 0)
    {
    rez=2.0f/b2;
    printf("%.2f", rez);
    }
    else
    printf("2");
  }
  if ((b3<b1) && (b3<b2))
  {
    if (b3 % 2 == 0)
    {
    rez=3.0f/b3;
    printf("%.3f", rez);
    }
    else
    printf("3");
  }
}
