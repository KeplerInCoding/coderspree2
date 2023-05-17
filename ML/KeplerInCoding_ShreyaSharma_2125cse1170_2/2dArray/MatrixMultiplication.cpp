#include <cstdio>
int main()
{
    int m1,n1,m2,n2;
    scanf("%d%d",&m1,&n1);
    int a[m1][n1];
    for(int i=0; i<m1; i++)
    {
        for(int j=0; j<n1; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d%d",&m2,&n2);
    int b[m2][n2];

    for(int i=0; i<m2; i++)
    {
        for(int j=0; j<n2; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int c[m1][n2];
    for(int i=0; i<m1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            c[i][j]=0;
            for(int k=0; k<n1; k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    if(n1!=m2)
    {
        printf("Invalid input");
        return 0;
    }
    for(int i=0; i<m1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}