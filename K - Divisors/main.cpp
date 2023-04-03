#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    
    for(int i = 1; i <= n ; i++) // 1 2 3 4 5 6 
    {
        
            if(n % i == 0)
            cout<<i<<endl;
    }
    
}