#include <stdio.h>
#include <stdlib.h>
int getnum(int a,int pos)
{
    int temp=1;
    int i;
    for(i=0;i<pos-1;i++)
        temp*=10;
    return (a/temp)%10;
}

void sort(int a[],int n)
{
    int b[10][50];
    int i,pos,num,index,j,k;
    for(i=0;i<10;i++)
        b[i][0]=0;
    for(pos=1;pos<=3;pos++)
    {
        for(i=0;i<n;i++)
        {
        num=getnum(a[i],pos);
        index=++b[num][0];
        b[num][index]=a[i];
        }
        for(i=0,j=0;i<10;i++)
        {
            for(k=1;k<=b[i][0];k++)
            {
                a[j++]=b[i][k];
            }
            b[i][0]=0;
        }
        for(i=0;i<n;i++)
        printf("%03d ",a[i]);
        printf("\n");
    }
}
int main()
{
    int a[10];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    sort(a,n);
    return 0;
}
