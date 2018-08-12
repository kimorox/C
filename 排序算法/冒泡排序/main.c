#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,flag,a[100],temp,pos,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        k=n-1;
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<k;j++)
        {
            if(a[j]>a[j+1])
            {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            flag=1;
            pos=j;
            }
        }
        k=pos;
        for(j=0;j<n;j++)
        printf("%d ",a[j]);
        printf("\n");
        if(flag==0)
            break;
    }
    return 0;
}
