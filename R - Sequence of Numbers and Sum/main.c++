#include <bits/stdc++.h>
using namespace std;
int main (void)
{
    int n , m;
    while (true)
    {
        cin>>n>>m;
 
        if(n <= 0 || m <= 0)
            break;
        int minn= min(n,m);
        int maxx= max(n,m);
 
        int sum = 0;
        for (int i = minn; i <= maxx; i++)
        {
            cout<<i<<" ";
            sum = sum + i; 
        }
 
    cout<<"sum ="<<sum<<endl;    
    }
}