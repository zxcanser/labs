#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void fill(int m, int n, int a[][n])
{
    for ( int i = 0; i < m; i ++)
    {
        for ( int j = 0; j < n; j ++)
            a[i][j] = rand()%100+1;
    } printf("Matrix filled by random numbers: \n");
}
void out(int m, int n, int a[][n])
{
    for ( int i = 0; i < m; i ++)
    {
        for (int j = 0; j < n; j ++)
        printf("\t%d",a[i][j]);
        printf("\n");
    }
}
void af(int m, int n, int a[][n])
{
    int summ = 0;
    double f;
    for ( int i = 0; i < m; i ++)
    {
        for ( int j = 0; j < n; j ++)
        summ += a[i][j] * a[i][j];
    }
    printf("||A||F = %.3lf", f = sqrt(summ));
}

int main()
{
    srand(time(0));
    int m,n;
    printf("Matrix type A[m][n]\n");
    printf("m -> ");
    scanf("%d", &m);
    printf("n -> ");
    scanf("%d", &n);
    int A[m][n];
    fill(m, n, A);
    out(m, n, A);
    af(m, n, A);
    return 0;
}
