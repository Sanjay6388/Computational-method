#include <stdio.h>
#include <math.h>
#define f(x) sin(x) - x*cos(x)
#define e 0.001
int main()
{
    float a,b;
    int i=0;
    float f0;
    printf("Enter the initial guess for solution /factor \t");
    scanf("%f %f" ,&a,&b);
    int f1=f(a);
    int f2=f(b);
    if((f1*f2)>0)
    {
        printf("Wrong input try again");
    }
    else {
        do
        {
            float x1=(a+b)/2;
            f0=f(x1);
            i++;
            if(f0>0)
            {
                b=x1;
            }
            else
            {
                a=x1;
            }
            printf(" number of intertion %d" ,i);
            printf(" root is %f" ,x1);
            printf(" value of function is %f \n" ,f0);
        }while(fabs(b-a)>e);
    }
return 0;
}
