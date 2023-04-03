#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    char x;
    cin>>x;
 
    if(x >= 48 && x <= 57)
    cout<<"IS DIGIT"<<endl;
    else if(x >= 65 && x <= 90)
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL";
    }
    else
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL";
    }
 
}