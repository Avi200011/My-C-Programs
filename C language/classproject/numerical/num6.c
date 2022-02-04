#include <stdio.h>
#include <math.h>

float f(float x)
{
    return (1 / (1 + pow(x, 2)));
}

void trapezoidal(float xn, float x0)
{
    int i, n;
    float h, y[20], so, se, ans, x[20];
    printf("\n Enter value of h:\n");
    scanf("%f", &h);
    n = (xn - x0) / h;
    if (n % 2 == 1)
    {
        n = n + 1;
    }
    h = (xn - x0) / n;
    printf("\nrefined value of n and h are:%d  %f\n", n, h);
    printf("\n Y values \n");
    for (i = 0; i <= n; i++)
    {
        x[i] = x0 + i * h;
        y[i] = f(x[i]);
        printf("\n%f\n", y[i]);
    }
    so = 0;
    se = 0;
    for (i = 1; i < n; i++)
    {
        if (i % 2 == 1)
        {
            so = so + y[i];
        }
        else
        {
            se = se + y[i];
        }
    }
    ans = h / 3 * (y[0] + y[n] + 4 * so + 2 * se);
    printf("\nfinal integration is %f", ans);
}

void simpson(float xn, float x0)
{
    int i, n;
    float h, y[20], so, se, ans, x[20];
    printf("\n Enter value of h: ");
    scanf("%f", &h);
    n = (xn - x0) / h;
    if (n % 2 == 1)
    {
        n = n + 1;
    }
    h = (xn - x0) / n;
    printf("\n Refined value of n and h are:%d %f\n", n, h);
    printf("\n Y values: \n");
    for (i = 0; i <= n; i++)
    {
        x[i] = x0 + i * h;
        y[i] = f(x[i]);
        printf("\n %f\n", y[i]);
    }
    so = 0;
    se = 0;
    for (i = 1; i < n; i++)
    {
        if (i % 2 == 1)
        {
            so = so + y[i];
        }
        else
        {
            se = se + y[i];
        }
    }
    ans = h / 3 * (y[0] + y[n] + 4 * so + 2 * se);
    printf("\n Final integration is %f", ans);
}

int main()
{
    int lower, upper;
    printf("\n Enter lower limit: ");
    scanf("%d", &lower);
    printf("\n Enter upper limit: ");
    scanf("%d", &upper);

    printf("\n Integration using trapezoidal method: \n");
    trapezoidal(upper, lower);
    printf("\n Integration using simpson's 1/3rd method: \n");
    simpson(upper, lower);

    return 0;
}