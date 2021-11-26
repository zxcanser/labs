#include <stdio.h>
#include <math.h>

int main() {
  double x = 0.0,h,i,k = 0;
  printf("Enter h -> ");
  scanf("%lf", &h);
  printf("x\t\tf(x)\n");
  i = 2 / h;
  for (k = 0; k <= i; k++) {
    if (k <= i / 2) {
      double f = 8*pow(x,3)*cos(x);
      printf("%lf\t%lf\n", x, f);
      x = x + h;
    }
    if (k > i / 2) {
      double f = log10(1+sqrt(x))-cos(x);
      printf("%lf\t%lf\n", x, f);
      x = x + h;
    }
  }
return 0;
}
