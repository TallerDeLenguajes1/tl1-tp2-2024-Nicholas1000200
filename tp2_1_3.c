#include <stdio.h>
#include <stdlib.h>

#define N 5
#define M 7

int main()
{
    int mt[N][M];
    int (*ptr)[M] = mt;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            *(*(ptr + i) + j) = 1 + rand() % 100;
            printf("%d ", *(*(ptr + i) + j));
        }
        printf("\n");
    }

    return 0;
}
