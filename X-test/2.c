#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    long long int t, a, b, c, k;
    scanf("%lld", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%lld %lld %lld %lld", &a, &b, &c, &k);
        a = llabs(a);
        b = llabs(b);
        c = llabs(c);
        if (k != 0)
        {
            if (a % k == b % k && a % k == c % k)
            {
                int anon = (a / k) + (b / k) + (c / k);
                if (anon % 3 == 0)
                {
                    printf("Case %d: Peaceful\n", i);
                }
                else
                {
                    printf("Case %d: Fight\n", i);
                }
            }
            else
            {
                printf("Case %d: Fight\n", i);
            }
        }
        else
        {
            if (a == b && a == c)
            {
                printf("Case %d: Peaceful\n", i);
            }
            else
            {
                printf("Case %d: Fight\n", i);
            }
        }
    }
    return 0;
}