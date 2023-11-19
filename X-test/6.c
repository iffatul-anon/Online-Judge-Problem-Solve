#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        double xyz[3], l, w, h, h2;
        scanf("%lf %lf %lf %lf %lf %lf", &xyz[0], &xyz[1], &xyz[2], &l, &w, &h);
        for (int i = 0; i < 3; i++)
        {
            for (int j = i + 1; j < 3; j++)
            {
                if (xyz[i] > xyz[j])
                {
                    int tem = xyz[i];
                    xyz[i] = xyz[j];
                    xyz[j] = tem;
                }
            }
        }
        if (h > xyz[2])
        {
            printf("-1\n");
        }
        else
        {
            int flag = 1, count = 0;
            while (l > xyz[2])
            {
                l = l / 2;
                h = h * 2;
                count++;
            }

            while (w > xyz[2])
            {
                w = w / 2;
                h = h * 2;
                count++;
            }
            if (l <= w)
            {
                while (l > xyz[1])
                {
                    l = l / 2;
                    h = h * 2;
                    count++;
                }
                if (h > xyz[2])
                {
                    printf("-1\n");
                }
                else if (h <= xyz[0])
                {
                    printf("%d\n", count);
                }
                else if (h <= xyz[1])
                {
                    while (l > xyz[0])
                    {
                        l = l / 2;
                        h = h * 2;
                        count++;
                    }
                    if (h > xyz[2])
                    {
                        printf("-1\n");
                    }
                    else if (h <= xyz[1])
                    {
                        printf("%d\n", count);
                    }
                    else if (h <= xyz[2])
                    {
                        while (w > xyz[1])
                        {
                            w = w / 2;
                            h = h * 2;
                            count++;
                        }
                        if (h > xyz[2])
                        {
                            printf("-1\n");
                        }
                        else if (h <= xyz[2])
                        {
                            printf("%d\n", count);
                        }
                    }
                }
                else if (h <= xyz[2])
                {
                    while (l > xyz[0])
                    {
                        l = l / 2;
                        h = h * 2;
                        count++;
                    }
                    while (w > xyz[1])
                    {
                        w = w / 2;
                        h = h * 2;
                        count++;
                    }
                    if (h > xyz[2])
                    {
                        printf("-1\n");
                    }
                    else if (h <= xyz[2])
                    {
                        printf("%d\n", count);
                    }
                }
            }
            else
            {
                while (w > xyz[1])
                {
                    w = w / 2;
                    h = h * 2;
                    count++;
                }
                if (h > xyz[2])
                {
                    printf("-1\n");
                }
                else if (h <= xyz[0])
                {
                    printf("%d\n", count);
                }
                else if (h <= xyz[1])
                {
                    while (w > xyz[0])
                    {
                        w = w / 2;
                        h = h * 2;
                        count++;
                    }
                    if (h > xyz[2])
                    {
                        printf("-1\n");
                    }
                    else if (h <= xyz[1])
                    {
                        printf("%d\n", count);
                    }
                    else if (h <= xyz[2])
                    {
                        while (l > xyz[1])
                        {
                            l = l / 2;
                            h = h * 2;
                            count++;
                        }
                        if (h > xyz[2])
                        {
                            printf("-1\n");
                        }
                        else if (h <= xyz[2])
                        {
                            printf("%d\n", count);
                        }
                    }
                }
                else if (h <= xyz[2])
                {
                    while (w > xyz[0])
                    {
                        w = w / 2;
                        h = h * 2;
                        count++;
                    }
                    while (w > xyz[1])
                    {
                        l = l / 2;
                        h = h * 2;
                        count++;
                    }
                    if (h > xyz[2])
                    {
                        printf("-1\n");
                    }
                    else if (h <= xyz[2])
                    {
                        printf("%d\n", count);
                    }
                }
            }
        }
    }
    return 0;
}