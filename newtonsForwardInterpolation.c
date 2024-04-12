#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    printf("This code is run by Bijay Shrestha.\n");

    float h, f, p, d, s;
    int i, j, n;
    printf("Enter the value of n (number of terms you want to enter): ");
    scanf("%d", &n);
    float x[n], y[n];
    printf("Enter the elements of x\n");
    for (i = 1; i <= n; i++)
    {
        scanf("%f", &x[i]);
    }
    printf("Enter the elements of y\n");
    for (i = 1; i <= n; i++)
    {
        scanf("%f", &y[i]);
    }
    h = x[2] - x[1];
    printf("Please enter the value of x for which you want to print y: ");
    scanf("%f", &f);
    p = 1;
    d = y[1];
    s = (f - x[1]) / h;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            y[j] = y[j + 1] - y[j];
        }
        p = p * (s - i + 1) / i;
        d = d + p * y[1];
    }
    printf("For the value of x(%f) the value of y is %0.4f", f, d);
}
