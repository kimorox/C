#include <stdio.h>
#include <stdlib.h>
void sort(int a[],int n)
{
    int i,j,temp,gap;
    for(gap=n/2;gap>0;gap/=2)
    {
        for(i=gap;i<n;i++)
    {
        if(a[i-gap]>a[i])
        {
            temp=a[i];
            for(j=i-gap;j>=0&&a[j]>temp;j-=gap)
                a[j+gap]=a[j];
            a[j+gap]=temp;
        }
    }
    }
}
int main()
{
    int i,a[50],n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,n);
    for(i=0;i<n;i++)

        printf("%d ",a[i]);
    return 0;
}
