#include <stdio.h>
#include <math.h>

int main()
{
  double x = 0.0,h,i,k = 0,f;
  printf("Enter h -> ");
  scanf("%lf", &h);
  printf("x\t\tf(x)\n");
  i = 2 / h;
  do
  {
    if (k <= i / 2)
      f = 8*pow(x,3)*cos(x);
    else
      f = log10(1+sqrt(x))-cos(x);
    printf("%lf\t%lf\n", x, f);
    x = x + h;
    k++;
} while (k<=i);
return 0;
}
