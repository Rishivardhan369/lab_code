#include<bits/stdc++.h>
using namespace std;
class board{
    private:
    vector<vector<char>>bo;
    public:
    board() {
        bo = vector<vector<char>>(3, vector<char>(3,' '));
    }
    void display()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<" "<<bo[i][j]<<" ";
                if(j<2)cout<<"|";
            }
            if(i<2)
            cout<<"\n"<<"---+---+---"<<"\n";
        }
    }
    bool isfull()
    {
        int co=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(bo[i][j]=='O' || bo[i][j]=='X')
                co++;
            }
        }
        if(co==9)
        return 1;
        else
        return 0;
    }
    int isvalid(int pos)
    {
        if(pos<1 || pos>9)
        {
            cout<<"-:please enter a valid index in between (1-9):-"<<"\n";
            return 0;
        }
        int row=(pos-1)/3;
        int col=(pos-1)%3;
        if(bo[row][col]=='O' || bo[row][col]=='X')
        return 1;
        else
        return 0;
    }
    void insert(int i){
        st:
        int pos;
        cin>>pos;
        if(isvalid(pos)==1)
        {
            cout<<"this position is already full"<<"\n"<<"-:please enter a valid index in between (1-9):-"<<"\n";
            goto st;
        }    
        if(pos<1 || pos>9)
        {
            cout<<"-:please enter a valid index in between (1-9):-"<<"\n";
            goto st;
        }
        int row=(pos-1)/3;
        int col=(pos-1)%3;
        if(i==1)
        bo[row][col]='O';
        else
        bo[row][col]='X';
    }
    int win()
    {
        for(int i=0;i<3;i++)
        {
            if(bo[i][0]=='O' && bo[i][1]=='O' && bo[i][2]=='O')
            return 1;
            if(bo[i][0]=='X' && bo[i][1]=='X' && bo[i][2]=='X')
            return 2;
        }
        for(int j=0;j<3;j++)
        {
            if(bo[0][j]=='O' && bo[1][j]=='O' && bo[2][j]=='O')
            return 1;
            if(bo[0][j]=='X' && bo[1][j]=='X' && bo[2][j]=='X')
            return 2;
        }
        if(bo[0][0]=='O' && bo[1][1]=='O' && bo[2][2]=='O')
        return 1;
        if(bo[0][0]=='X' && bo[1][1]=='X' && bo[2][2]=='X')
        return 2;
        if(bo[0][2]=='O' && bo[1][1]=='O' && bo[2][0]=='O')
        return 1;
        if(bo[0][2]=='X' && bo[1][1]=='X' && bo[2][0]=='X')
        return 2;
        return 0;
    }
    // int toss()
    // {
    //     int a=1+rand()%2;
    //     cout<<"p"<<a<<": to chose the toss"<<"\n";
    //     cout<<"1:heads"<<"\n"<<"2:tails"<<"\n";
    //     cout<<"p"<<a<<":";
    //     int b;
    //     cin>>b;
    //     int c=1+rand()%2;
    //     if(a==1)
    //     {
    //         if(b==1 && c==1 || b==2 && c==2)
    //         {
    //             cout<<"player 1 has won the toss"<<"\n";
    //             return 1;
    //         }
    //         else
    //         {
    //             cout<<"player 1 has loss the toss"<<"\n";
    //             return 2;
    //         }
    //     }
    //     else
    //     {
    //         if(b==1 && c==1 || b==2 && c==2)
    //         {
    //             cout<<"player 2 has won the toss"<<"\n";
    //             return 2;
    //         }
    //         else
    //         {
    //             cout<<"player 2 has loss the toss"<<"\n";
    //             return 1;
    //         }
    //     }

    // }
    void start()
    {
        cout<<"p1 - O"<<"\n"<<"p2 - X";

        cout<<"\n"<<"-:you need to give the position to insert:-"<<"\n";
        // int i=toss();


        int i=1+rand()%2;
        int check=0;
        while(!isfull())
        {
            if(i>2)
            i=1;
            cout<<"p"<<i<<":";
            insert(i);
            display();
            if(win()==1)
            {
                cout<<"\n"<<"player 1 won the game"<<"\n";
                check=1;
                break;
            }
            if(win()==2)
            {
                cout<<"\n"<<"player 2 won the game"<<"\n";
                check=1;
                break;
            }
            cout<<"\n";
            i++;
        }
        if(check!=1)
        cout<<"\n"<<"The game has been tied";
    }
    void blueprint()
    {
        int a=1;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<" "<<a<<" ";
                if(j<2)cout<<"|";
                a++;
            }
            if(i<2)
            cout<<"\n"<<"---+---+---"<<"\n";
        }
    }
};
int main()
{
    srand(time(0));
    board a;
    a.blueprint();
    cout<<"\n";
    // if board is full isfull function returns 1
    a.start();
}