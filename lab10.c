#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int **mass(int m, int n)
{
    int **A = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++)
        A[i] = malloc(n * sizeof(int));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = rand()%100+1;
            printf("\t%d", A[i][j]);
        }
        printf("\n");
    }
    return A;
    for (int i = 0; i < m; i++)
        free (A[i]);
    free (A);
}

void af(int m, int n, int **A)
{
    int summ = 0;
    double f;
    for ( int i = 0; i < m; i ++)
    {
        for ( int j = 0; j < n; j ++)
        summ += A[i][j] * A[i][j];
    }
    printf("||A||F = %.3lf\n", f = sqrt(summ));
}

int main()
{
    srand(time(0));
    int m,n;
    printf("Enter matrix type A[m][n]\n");
    printf("m -> ");
    scanf("%d", &m);
    printf("n -> ");
    scanf("%d", &n);
    int **A = mass(m, n);
    af(m, n, A);
    return 0;
}
