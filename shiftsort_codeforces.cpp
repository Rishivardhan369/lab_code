#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string st;
        cin>>st;
        string dub=st;
        sort(dub.begin(),dub.end());
        int co=0;
        for(int i=0;i<n;i++)
        {
            if(dub[i]!=st[i])
            co++;
        }
        cout<<co/2<<"\n";
    }
}