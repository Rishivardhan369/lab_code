#include<bits/stdc++.h>
using namespace std;
class Queue
{
    private:
    int f,l,ar[100];
    public:
    Queue(){
        f=-1,l=-1;
    }
    bool isempty()
    {
        if(l==-1 || f==l)
        return 1;
        else
        return 0;
    }
    bool isfull()
    {
        if(l==100)
        return 1;
        else
        return 0;
    }
    void push(int a)
    {
        if(!isfull())
        ar[++l]=a;
        else
        cout<<"queue is full"<<endl;
    }
    int pop()
    {
        if(isempty())
        {
            return -1;
        }
        return ar[++f];
    }
    void display()
    {
        if(isempty())
        {
            cout<<"queue is empty"<<endl;
            return ;
        }
        for(int i=f+1;i<=l;i++)
        cout<<ar[i]<<"\n";
    }
};
int main()
{
    Queue q;
    q.push(10);
    q.display();
    q.push(20);
    q.display();
    q.pop();
    q.display();
}