#include <stdio.h>
#include <math.h>
#define f(x) pow(x, 3) + x *x - 3 * x - 3
int main()
{
    printf("This code is run by Bijay Shrestha.\n");
    float x1, x2, x0, f1, f2, f0, e;
    int Sn = 1;
    printf("Enter the error criteria: ");
    scanf("%f", &e);
up:
    printf("Enter the value of x1 and x2: \n");
    scanf("%f%f", &x1, &x2);
    f1 = f(x1);
    f2 = f(x2);
    if ((f1 * f2) > 0)
    {
        printf("Wrong Inital Guesses \n");
        goto up;
    }
    printf("\nS.N.\t\t*1\t\t*2\t\t*0\t\tf(x0)");
    do
    {
        x0 = (x1 + x2) / 2;
        f0 = f(x0);
        printf("\n%d\t\t\t%f\t\t%f\t\t%f\t\t", Sn, x1, x2, x0);
        if ((f1 * f0) < 0)
        {
            x2 = x0;
            f2 = f0;
        }
        else
        {
            x1 = x0;
            f1 = f0;
        }
        Sn++;
    } while (fabs(f0) > e);
    printf("\n\nThe root is %f", x0);
    return 0;
}