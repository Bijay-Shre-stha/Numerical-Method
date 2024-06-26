#include <stdio.h>
#define f(x, y) x + y
int main()
{
    printf("This code is run by Bijay Shrestha.\n");

    float x0, y0, xn, h, yn, slope;
    int i, n;
    printf("Enter Initial Condition\n");
    printf("x0 = ");
    scanf("%f", &x0);
    printf("y0 = ");
    scanf("%f", &y0);
    printf("Enter calculation point xn = ");
    scanf("%f", &xn);
    printf("Enter h: ");
    scanf("%f", &h);
    n = (xn - x0) / h;
    for (i = 0; i < n; i++)
    {
        slope = f(x0, y0);
        yn = y0 + h * slope;
        y0 = yn;
        x0 = x0 + h;
        printf("\n y(%f) = %f", x0, y0, slope, yn);
    }
    printf("\n\n Therefore, value of y at x = %0.2f is %f", xn, yn);
    return 0;
}