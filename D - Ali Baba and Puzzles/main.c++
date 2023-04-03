#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
 
    if (a * b - c == d)
    cout<<"YES"<<endl;
    else if(a * b + c == d)
    cout<<"YES"<<endl;
 
    else if(a + b * c == d)
    cout<<"YES"<<endl;
    else if(a + b - c == d)
    cout<<"YES"<<endl;
 
    else if(a - b * c == d)
    cout<<"YES"<<endl;
    else if(a - b + c == d)
    cout<<"YES"<<endl;
 
    else
    cout<<"NO"<<endl;
 
    /* if(a * b * c == d)
    cout<<"YES"<<endl;
    else if(a - b - c == d)
    cout<<"YES"<<endl;
    else if(a + b + c == d)
    cout<<"YES"<<endl;*/
 
}