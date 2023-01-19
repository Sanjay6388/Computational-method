#include<stdio.h>
#include<math.h>
void main() 
{
    float x0,y0,xn,h,x,y,k1,k2,k3,k4;
    float f(float x , float y);
    printf("Enter the initial values of x and y :");
    scanf("%f %f" ,&x0,&y0);
    printf("Enter last value of x : ");
    scanf("%f",&xn);
    printf("Enter step value of h : ");
    scanf("%f",&h);
    y=y0;
    printf("X-value    Y-value\n");
    for(x=x0;x<xn;x+=h)
    {
        k1=h*f(x,y);
        k2=h*f(x+h/2,y+k1/2);
        k3=h*f(x+h/2,y+k2/2);
        k4=h*f(x+h,y+k3);
        y=y+(k1+2*(k2+k3)+k4)/6;
        printf("%f   %f\n",x+h,y);
    }
}
float  f(float x , float y)
{  
    return(x*x-y*y+y);
}