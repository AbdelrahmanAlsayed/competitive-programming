#include <bits/stdc++.h>
using namespace std;
int main (void)
{
    int n;
    cin>>n;
    int k = 1;
    int sp = n-1;
    for (int i = 0; i < n; i++)
    {
        for (int t = sp; t > 0; t--)
        {
            cout<<" ";
        }
                sp--;
        for(int j = 0; j < k ; j++)
        {
            cout<<"*";    
        }
        k+=2;
        cout<<endl;
    }
    
}