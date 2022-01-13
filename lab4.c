#include <math.h>
#include <stdio.h>
double f(double x)
{
  if (x <= 1 && x >= 0)
      return 8*pow(x,3)*cos(x);
  else
      return log(1+sqrt(x))-cos(x);
}
double integral(double a, double b, int n)
{
    double h = (b - a) / n;
    double S = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        S += f((a + i * h) + h / 2);
    }
    return S * h;
}
int main()
{
    int a = 0, b = 2, n = 10;
    double eps, I, I1, d = 1;
    printf("Enter h -> ");
    scanf("%lf,\n", &eps);
    while (d >= eps)
    {
        I1 = integral(a, b, n);
        d = fabs(I1 - I) / 3;
        I = I1;
        n = n * 2;
    }
    printf("I = %.5lf\n", I1);
    return 0;
}