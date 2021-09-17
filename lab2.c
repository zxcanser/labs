#include <stdio.h>
#include <math.h>
int main()
{
  double x;
  printf("Enter x -> ");
  scanf("%lf", &x);
  if (-1.0 <= x &&x <= 1.0)
  {
    double y = 5 * sqrt(sin(sqrt(x)));
    double z= log10(cos(log(y)));
    printf("y(x) = %lf\nz(y) = %lf\n", y, z);
  }
  else
    printf("Vallue is incorrect!)");
}
