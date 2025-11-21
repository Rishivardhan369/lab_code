#include<bits/stdc++.h>
using namespace std;
class rectangle{
    private:
    double le,br;
    public:
    rectangle(double a,double b)
    {
        this->le=a;
        this->br=b;
    }
    void area()
    {
        cout<<le*br;
    }
    void perimeter()
    {
        cout<<2*(le+br);
    }
};
int main()
{
    rectangle r1(2.34,5.24);
    r1.area();
}