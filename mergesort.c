#include<stdio.h>
void meg(int ar[],int st,int mid,int en,int n)
{
	int i=st,j=mid+1;
	int a[en-st+1];
	int k=0;
	while(i<=mid && j<=en)
	{
		if(ar[i]<ar[j])
		a[k++]=ar[i++];
		else
		a[k++]=ar[j++];
	}
	while(i<=mid)
	a[k++]=ar[i++];
	while(j<=en)
	a[k++]=ar[j++];
	k=0;
	for(i=st;i<=en;i++)ar[i]=a[k++];
}
int merge(int ar[],int st,int en,int n)
{
	int mid=(st+en)/2;
	if(st>=en) 
	return 1;
	merge(ar,st,mid,n);
	merge(ar,mid+1,en,n);
	meg(ar,st,mid,en,n);
}
int main()
{
	int n;
	scanf("%d",&n);
	int ar[n],i;
	for(i=0;i<n;i++)scanf("%d",&ar[i]);
	merge(ar,0,n-1,n);
	for(i=0;i<n;i++)printf("%d ",ar[i]);
	
}