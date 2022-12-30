#include<stdio.h>
#include<math.h>
#define e 0.001
#define f(x) 1/1+x*x*x*x
int main()
{
    float a,b,fa,fb,h,k,m, I=0.0;
    int i,n;
    printf("Enter lower limit integration :");
    scanf("%f",&a);
    printf("Enter upper limit integration :");
    scanf("%f",&b);
    printf("Enter number of sub intervals :");
    scanf("%d",&n);
    h =(b-a)/n;
    fa=f(a);
    fb=f(b);
    m=fa+fb;
    for(i=1; i<=n-1; i++)
    {
        k=a+i*h;
        m=m+2*f(k);

    }
    I=m*(h/2);
    printf("\n Required Value of integration is :%f",I);
    
}