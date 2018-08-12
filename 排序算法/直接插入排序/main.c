#include <stdio.h>
#include <stdlib.h>
void sort(int a[],int n)
{
    int i,j,temp;
    for(i=1;i<=n;i++)
    {
        if(a[i-1]>a[i])
        {
            temp=a[i];
            for(j=i-1;j>=0&&a[j]>temp;j--)
                a[j+1]=a[j];
            a[j+1]=temp;
        }
    }
}
int main()
{
    int i,a[50],n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
