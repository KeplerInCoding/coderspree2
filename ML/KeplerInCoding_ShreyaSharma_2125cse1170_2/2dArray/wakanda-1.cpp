#include <cstdio>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            for(int j=0; j<m; j++)
            {
                printf("%d\n",a[j][i]);
            }
        }
        else{
            for(int j=m-1; j>=0; j--)
            {
                printf("%d\n",a[j][i]);
            }
        }
    }
    return 0;
}