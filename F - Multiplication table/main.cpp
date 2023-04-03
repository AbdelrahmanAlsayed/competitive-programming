#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, y, x =1;
    cin>>n; 
    for(int i = 0; i < 12; i++)
    {
        y = n * x;
        cout<<n<<" * "<<x<<" = "<<y<<endl;
        x++;
    }
}