#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
 
    if(b * log(a) > d * log(c))
    cout<<"YES"<<endl;
    else
    cout<<"NO\n";
}