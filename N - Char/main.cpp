#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    char x;
    cin>>x;
 
    if(x >= 'a' && x <= 'z' )
        cout<< (char) (x - 32);
    else
    cout<<(char)(x + 32);
 
}
