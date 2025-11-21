#include<bits/stdc++.h>
using namespace std;
class spe{
    private:
        string wish;
    public:
        int no;
    void dis(){
        cout<<wish<<"\n"<<no<<"\n";
    }
    void ch(string a)
    {
        wish=a;
    }
};
int main(){
    spe a,b;
    a.no=13;
    a.ch("gafia");
    b.no=123;
    b.ch("asbfjasf");
    a.dis();
    b.dis();
}