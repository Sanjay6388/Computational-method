#include<stdio.h>
#include<math.h>
#define e 0.001
#define f(x) 1/1+x*x*x*x
int main(){
    int i,n;
    float a,b,l,h,k,m,p=0.0,q=0.0;
    printf("Enter value of lower limit :");
    scanf("%f", &a);
    printf("Enter value of upper limit :");
    scanf("%f", &b);
    printf("No. of sub-intervals :");
    scanf("%d",&n);
    h = (b-a)/n;
    l = f(a) + f(b);
    for(i = 1; i<=n-1; i++)
    {
        k = a + (i*h);
        if(i%2 == 0){
            p = p+2*f(k);
        }
        else{
            q = q + 4*f(k);
        }
        m = (h/3)*(l+p+q);

    }
    printf("\n Required value of integration is %f\n",m);
    return 0;
}