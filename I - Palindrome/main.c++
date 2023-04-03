#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, num = 0 , tmp;
    cin>>n;
    tmp = n;
    for(int i = 0; n > 0; i++)
    {
        num = num * 10 +  n % 10 ; // to get the last digit of the number
        n = n / 10;
 
        
    }
    cout<<num;
    if(tmp == num)
    cout<<endl<<"YES"<<endl;
    else
    cout<<endl<<"NO"<<endl; 
 
}
