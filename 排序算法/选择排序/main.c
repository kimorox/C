#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,a[100],min,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
                min=j;
        }
        if(min!=i)
        {
            temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
