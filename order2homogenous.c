#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    //ay'' + by' + cy = 0
    double a,b,c;

    printf("ay'' + by' +cy = 0\n");

    printf("a = ");
    scanf("%lf",&a);
    printf("b = ");
    scanf("%lf",&b);
    printf("c = ");
    scanf("%lf",&c);

    printf("Solving...\n\n");
    
    //solve auxiliary quadratic
    double delta = b*b - 4*a*c;

    if(delta > 0)
    {
        double m1 = (-b + sqrt(delta))/(2*a);
        double m2 = (-b - sqrt(delta))/(2*a);

        printf("y = Ae^%lfx + Be^%lfx",m1,m2);
    }
    else if(delta == 0)
    {
        double m = -b/(2*a);

        printf("y = (Ax + B) e^%lfx",m);
    }
    else //by trichotomy
    {
        double m_re = -b/(2*a);
        double m_im = sqrt(abs(delta))/(2*a);

        printf("y = e^%lfx (Asin(%lfx) + Bcos(%lfx))",m_re,m_im,m_im);
    }
}