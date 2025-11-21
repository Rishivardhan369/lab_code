#include<stdio.h>
int binary(int low,int high,int ar[],int a)
{
    int mid=(low+high)/2;
    if(low>high)
    return -1;
    if(ar[mid]==a)
    return mid;
    else if(ar[mid]<a)
    return binary(mid+1,high,ar,a);
    else if(ar[mid]>a)
    return binary(low,mid-1,ar,a);
}
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)scanf("%d",&ar[i]);
    int a;
    printf("enter an element to search:");
    scanf("%d",&a);
    int b=binary(0,n-1,ar,a);
    if(b==-1)
    printf("not found");
    else
    printf("is found at the index %d",b);
}