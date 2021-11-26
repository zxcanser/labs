#include <stdio.h>
#include <math.h>

double cycle(int n) {
    double summ = 0, k = 0;
    if (n/10==0)
        return n;
    else {
        while (n>0) {
        summ=summ+n%10;
        k++;
        n=n/10;
        }
    return (double)summ/k;
    }
}
double recur(int n, int summ, int i) {
    summ += n%10;
    i++;
    if (n/10 != 0)
      recur(n/10,summ,i);
    else
      return (double)summ/i;
}

int main() {
    unsigned int n;
    printf("Enter number -> ");
    scanf("%u",&n);
    printf("Cycle:       arithmetic mean of digits of a number = %.2lf\n", cycle(n));
    printf("Recursion:   arithmetic mean of digits of a number = %.2lf\n", recur(n,0,0));
    return 0;
}
