#include<stdio.h>
int isMonotonic(int nums[], int numsSize) {
    int in=0,dec=0,n=numsSize;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<=j && nums[i]<=nums[j])
            {
                in++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<=j && nums[i]>=nums[j])
            {
                dec++;
            }
        }
    }

    if(in==numsSize || dec==numsSize)
    return 1;
    else
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)scanf("%d",&ar[i]);
    int a=isMonotonic(ar,n);
    if(a==1)
    printf("true");
    if(a==0)
    printf("false");
}