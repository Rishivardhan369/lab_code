#include<bits/stdc++.h>
using namespace std;
class al{
    public:
    inline int add(int a,int b)
    {
        return a+b;
    }
    inline int sub(int a,int b)
    {
        return a-b;
    }
    inline int mul(int a,int b)
    {
        return a*b;
    }
    inline int div(int a,int b)
    {
        if(b==0)
        return -1;
        return a/b;
    }
};
int main()
{
    al a;
    cout<<a.div(10,20);
}