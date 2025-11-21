#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int at[10],bt[10],ct[10],tat[10],wt[10],pid[10];
    float totaltat=0,totalwt=0;
    cout<<"enter no.of processes:";
    cin>>n;
    cout<<"\nenter the AT & BT of the processes\n";
    for(int i=0;i<n;i++){
        cout<<"arrival time:";
        cin>>at[i];
        cout<<"burst time:";
        cin>>bt[i];
    }
    ct[0]=at[0]+bt[0];
    tat[0]=ct[0]-at[0];
    wt[0]=tat[0]-bt[0];
    for(int i=1;i<n;i++)
    {
        if(at[i]>ct[i-1])
        ct[i]=at[i]+bt[i];
        else
        ct[i]=ct[i-1]+bt[i];
        tat[i]=ct[i]-at[i];
        wt[i]=tat[i]-bt[i];
    }
    for(int i=0;i<n;i++)
    {
        totaltat+=tat[i];
        totalwt+=wt[i];
    }
    cout<<"\np\tat\tbt\tct\ttat\twt\n";
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<"\t"<<at[i]<<"\t"<<bt[i]<<"\t"<<ct[i]<<"\t"<<tat[i]<<"\t"<<wt[i]<<"\n";
    }
    cout<<"average turn around time:"<<totaltat/n<<"\n"<<"average wait time:"<<totalwt/n;
}