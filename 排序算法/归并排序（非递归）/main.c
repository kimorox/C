#include <stdio.h>
#include <stdlib.h>

void mergearray(int a[], int first, int mid, int last, int temp[])
{
    int i = first, j = mid + 1;
    int m = mid, n = last;
    int k = 0;
    while (i <= m && j <= n)
    {
        if (a[i] <= a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }
    while (i <= m)
        temp[k++] = a[i++];
    while (j <= n)
        temp[k++] = a[j++];
    for (i = 0; i < k; i++)
        a[first + i] = temp[i];
}
void mergesort(int a[], int n, int temp[])
{
    int low,mid,high,size=1,k;
    while(size<=n-1)
    {
        low=0;
        while(low+size<=n-1)
        {
            mid=low+size-1;
            high=mid+size;
            if(high>n-1)
                high=n-1;
            mergearray(a,low,mid,high,temp);
            low=high+1;
        }
        size*=2;
        for(k=0;k<n;k++)
            printf("%d ",a[k]);
        printf("\n");
    }
}

int main()
{
    int *p,*a,n,i;
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    p=(int *)malloc(sizeof(int)*n);
    if (p == NULL)
        return 0;
    mergesort(a,n,p);
    free(a);
    free(p);
    return 1;
}
