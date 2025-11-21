#include<bits/stdc++.h>
using namespace std;
class segmenttree{
    private:
    vector<int>tr;
    public:
    segmenttree(int n)
    {
        tr.resize((2*n)-1);
    }
    void create(int i,int start,int end,vector<int>&a)
    {
        int mid=(start+end)/2;
        if(start==end)
        {
            tr[i]=a[start];
            return ;
        }
        create(2*i+1,start,mid,a);
        create(2*i+2,mid+1,end,a);
        tr[i]=tr[2*i+1]+tr[2*i+2];
    }
    void dis()
    {
        for(int i=0;i<tr.size();i++)
        cout<<tr[i]<<" ";
    }
    void update(int e,int p,int start,int end,int i){
        int mid=(start+end)/2;

        if(p<=mid)
        {
            update(e,p,start,mid,i);
        }
        else
        {
            update(e,p,mid+1,end,i);
        }
    }
};
int main(){
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++)cin>>ar[i];
    segmenttree s(n),a(5);
    vector<int>an;
    for(int i=0;i<5;i++)an.push_back(i+1);
    s.create(0,0,ar.size()-1,ar);
    a.create(0,0,an.size()-1,an);
    s.dis();
    cout<<endl;
    a.dis();
}