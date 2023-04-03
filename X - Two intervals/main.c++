#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
 
    if(max(l1,l2) > min(r1,r2))
    cout<<"-1";
    else
    cout<<max(l1,l2)<<" "<<min(r1,r2);
 
    
}
