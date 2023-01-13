#include<stdio.h>
#include<math.h>
int main(){
    float xp,x[20],y[20],yp=0.0,p;
    int i,j,n;
    printf("Enter the number of data =");
    scanf("%d",&n);
    printf("Enter the value to be found =");
    scanf("%f",&xp);
    printf("Enter the data");
    for(i=0;i<n;i++)
    {
        printf("x[%d]=",i);
        scanf("%f",&x[i]);
        printf("y[%d]=",i);
        scanf("%f",&y[i]);
    }
    for(i=0;i<n;i++)
    {p=1;
    for(j=0;j<n;j++)
    {if(j!=i)
    p=p*((xp-x[j])/(x[i]-x[j]));
    }
    yp=yp+p*y[i];
    }
    printf("Interpolated value at %.3f is %.3f",xp,yp);
    return 0;
}
