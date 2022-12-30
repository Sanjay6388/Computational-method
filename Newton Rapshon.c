#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define f(x) x - cos(x)
#define g(x) 1 + sin(x)
#define e 0.0001
int main() 
{
    float x0,x1,x2,f0,f1,f2,g0;
    int i=1,N;
    printf("\nEnter inital guess :- ");
    scanf("%f %f" ,&x1,&x2);
    printf("\nEnter maximum iterations:- ");
    scanf("%d",&N);
    f1=f(x1);
    f2=f(x2);
    if(f1*f2>0.0){
        printf("\n Wrong initial guess try another values\n");
        exit(0);
    }
    else
    if(fabs(f1)<fabs(f2)){
        x0=x1;}
    else{x0=x2;}
    do{
        f0=f(x0);
        g0=g(x0);
        x1=x0-(f0/g0);
        printf("Iterations no; %d\t\t",i);
        printf("\t Aprroximate root %f\n",x1);
        x0=x1;
        i++;
        if(i>N)
        {
            printf("Not convergent ,Change max iterations");
            exit(0);
        }
        f1=f(x1);
    }while (fabs(f0/g0)>e);
    printf("\n hence root %f\n" ,x1);
}