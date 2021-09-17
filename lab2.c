#include <stdio.h>
#include <math.h>
int main()
{
  float x, y, z;
  printf("Enter x -> ");
  scanf("%f", &x);
  if (x > 0 && x < 1.397)
  {
    y = 5 * sqrt(sin(sqrt(x)));
    z = log10(cos(log(y)));
    printf("y(x) = %f\nz(y) = %f\n", y, z);
  }
  else
    printf("Vallue is incorrect!)\n");
}
