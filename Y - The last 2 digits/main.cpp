#include <bits\stdc++.h>
using namespace std;
int main(void)
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;
 
    long long all = a*b*c*d;
    long long x =  all % 100;
 
    if(x < 10)
    cout<<0<<x;
    else
    cout<<x;    
}