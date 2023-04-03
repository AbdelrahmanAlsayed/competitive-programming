#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, num, maxx = 0;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>num;
        if(num > maxx)
        maxx = num;
 
    }
    cout<<maxx<<endl;
}
