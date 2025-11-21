#include<bits/stdc++.h>
using namespace std;
class  Account{
    private:
    double balance;
    protected:
    int account_no;
    public:
    string name;
    void change(double a,int b)
    {
        this->balance=a;
        this->account_no=b;
    }
    void dis()
    {
        cout<<name<<endl<<balance<<endl<<account_no;
    }
};
int main()
{
    Account A1;
    A1.name="Akhil";
    A1.change(231.231,123546);
    A1.dis();
}