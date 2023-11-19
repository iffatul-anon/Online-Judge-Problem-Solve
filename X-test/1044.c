#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d %d", &A, &B);
    if (A > B)
    {
        C = A % B;
        if (C == 0)
        {
            printf("Sao Multiplos\n");
        }
        else
        {
            printf("Nao sao Multiplos\n");
        }
    }
    else
    {
        C = B % A;
        if (C == 0)
        {
            printf("Sao Multiplos\n");
        }
        else
        {
            printf("Nao sao Multiplos\n");
        }
    }
    return 0;
}