#include<stdio.h>
#include<math.h>
#define e 0.001
#define f(x) x*x*x*x*x*x - x - 1
int main()
{
    float x0,x1,x2,f0,f1,f2;
    int i =0;
    printf("\n Enter value of x0 & x1 : ");
    scanf("%f %f ,&x0,&x1");
    do{
        f0=f(x0);
        f1=f(x1);
        x2 =((x0*f1)-(x2*f2)/(f1-f0));
        f2=f(x2);
        f0=f1;
        f1=f2;
        x0=x1;
        x1=x2;
        i++;
        printf("\n Number of iterations ,%f\t\t", x2);
        printf("\n Rooot is =%f\t\t" ,x2);
        printf("Value of function is : %f\t\t \n", f2);
    }while(fabs(f2)>e);
    

}
