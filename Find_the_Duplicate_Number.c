#include<stdio.h>
int main()
{
    int n,i,a[50],j,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            temp=a[i];
        }
    }
    printf("%d",temp);
}