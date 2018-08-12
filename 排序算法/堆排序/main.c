#include <stdlib.h>
#include <stdio.h>
int n;
void HeapAdjust(int H[],int start,int end)
{
    int temp=H[start];
    int j;
    for(j=2*start;j<=end;j*=2)
    {
        if(j<end&&H[j]<H[j+1])
        ++j;
        if(temp>H[j])
        break;
        else
        H[start]=H[j];
        start=j;
    }
    H[start]=temp;
}
void HeapSort(int H[],int L,int R)
{
    int i,j,temp;
    for(i=(R-L+1)/2;i>0;i--)
        HeapAdjust(H,i,R);
    for(i=(R-L+1);i>=1;i--)
    {
        for(j=1;j<=n;j++)
        printf("%d ",H[j]);
        printf("\n");
        temp=H[1];
        H[1]=H[i];
        H[i]=temp;
        HeapAdjust(H,1,i-1);
    }
}
int main()
{
    int a[50],i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    HeapSort(a,1,n);
    return 0;
}
