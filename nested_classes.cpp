#include<bits/stdc++.h>
using namespace std;
class boss{
    public:
    int a;
        class emp{
            public:
            int b;
        };
    void dis(int a)
    {
        emp e;
        e.b=a;
        cout<<boss::a<<"\n"<<e.b<<"\n";
    }
};
int main(){
    boss a,b;
    a.a=41;
    b.a=1243;
    b.dis(24124);
    a.dis(123);
}