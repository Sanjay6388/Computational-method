#include<stdio.h>
#include<conio.h>
int main()
{
    int r=2,c=2,a[2][2],b[2][2],mul[2][2],i,j,k;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter element a %d,%d:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }        
    }
    printf("First matrix= \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
        printf("%d\t",a[i][j]);
        }
        printf("\n");   
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
            printf("Enter element b %d,%d:",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("Second matrix= \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
           printf("%d\t", b[i][j]);        
        }
        printf("\n");
    }
    printf("Multiplication of matrices = \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            mul[i][j]=0;
            for(k=0;k<c;k++)
            {
            mul[i][j]+=a[i][k]*b[k][j];
        }
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
        printf("%d\t",mul[i][j]);
    }
    printf("\n");
    }
    return 0;
}