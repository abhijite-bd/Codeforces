#include <stdio.h>
#include <math.h>
int main()
{
    double x, y;
    scanf("%lf", &x);
read:
    if (x < 0);
        goto read;
    y = sqrt(x);
    printf("%lf %lf\n", x, y);
    goto read;
    return 0;
}