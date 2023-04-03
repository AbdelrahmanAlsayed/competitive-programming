#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int t, n;
    cin>>t;
    for(int i = 0; i < t ; i++)
    {
        cin>>n;
        long long fact = 1;
        for(int i = 1; i <= n ; i++)
        {
            fact *=i;
            
        }
        cout<<fact<<endl;
 
    }
    
    
}