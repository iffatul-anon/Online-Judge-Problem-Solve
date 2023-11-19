#include <stdio.h>

int main()
{
    float x, y, z, p, a;
    scanf("%f %f %f", &x, &y, &z);

    if (z < y + x && y < x + z && x < y + z)
    {
        p = x + y + z;
        printf("Perimetro = %.1f\n", p);
    }
    else
    {
        a = ((x + y) / 2) * z;
        printf("Area = %.1f\n", a);
    }

    return 0;
}