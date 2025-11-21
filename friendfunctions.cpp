#include<bits/stdc++.h>
using namespace std;
class overload{
    public:
    int val;
    overload(int va=0)
    {
        val=va;
    }
    overload operator++()
    {
        return val+=1;
    }
    void display()
    {
        cout<<val<<endl;
    }
    friend overload operator+(overload a,overload b);
};
overload operator+(overload a,overload b)
{
    return (a.val+b.val);
}
int main(){
    overload a(10),b(10);
    overload c;
    c=a+b;
    ++a;
    a.display();
    c.display();
}