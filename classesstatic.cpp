#include<bits/stdc++.h>
using namespace std;
class emp{
    public:
    static int co;
    emp()
    {
        co++;
    }
};
int emp::co=0;
int main()
{
    emp e1,e2,e3,e4,e5;
    cout<<"no of objects:"<<emp::co;
}