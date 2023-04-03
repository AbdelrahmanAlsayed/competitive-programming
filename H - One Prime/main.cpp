#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    bool check = 0; //
    for(int i = 2 ; i < n ; i++)
    {
        if(n % i == 0)
        check = 1;
    }
    
    
    if(check == 0 )
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
 
 
}