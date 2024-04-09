#include <stdio.h>
#define N 20
int main()
{
    int i;
    double vt[N];
    double *p_vt = &vt;
    for (i = 0; i < N; i++)
    {
        p_vt[i] = 1 + rand() % 100;
        printf("%p", *(p_vt + i));
    }
    return 0;
}
