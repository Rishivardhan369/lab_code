#include<bits/stdc++.h>
using namespace std;
class Stack{
    private:
    int top,ar[12];
    public:
    Stack() : top(-1){};
    void push(int a)
    {
        if(top==12)
        {
            cout<<"stack is full"<<"\n";
            return ;
        }
        ar[++top]=a;
    }
    int pop()
    {
        if(top==-1)
        return 0;
        return ar[top--];
    }
    void peek()
    {
        if(top==-1)
        {
            cout<<"stack is empty"<<"\n";
        }
         else
            cout<<ar[top]<<endl;
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.peek();
    cout<<st.pop()<<endl;
    st.peek();
}