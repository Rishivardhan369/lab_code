#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int co=0;
    for(int i=1;i<127;i++)
    {
        for(int j=0;j<256;j++)
        {
            for(int k=0;k<256;k++)
            {
                for(int q=0;q<256;q++)
                {
                    cout<<i<<"."<<j<<"."<<k<<"."<<q<<endl;
                    // co++;
                }
            }        
        }   
    }
// cout<<co;
}
