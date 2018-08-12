#include <stdio.h>
#include <stdlib.h>

void display(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
        printf("\n");
}

void quicksort(int a[],int first,int end)
{
        if(first>=end)
            return 0;
        int i=first,j=end,key=a[first];
        while(i<j)
        {
            while(i<j&&key<=a[j])
                j--;
            a[i]=a[j];
            while(i<j&&key>=a[i])
                i++;
            a[j]=a[i];
        }
        a[i]=key;
            quicksort(a,first,i-1);
            quicksort(a,i+1,end);
}

int main()
{
    int i,n,a[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    quicksort(a,0,n-1);
    display(a,n);
    return 0;
}
