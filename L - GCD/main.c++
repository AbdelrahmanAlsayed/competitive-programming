#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,n2;
    cin>>n>>n2;
 
    int minn = min(n,n2);  // 5,10 --- 5 
    
    for(int i = minn ; i >= 1 ; i--)  
    {
        if(n % i == 0 && n2 % i == 0)
        {
        cout<<i<<endl;
        return 0;
        }
    }
}

// #include <bits/stdc++.h>
// using namespace std;
// int main(void)
// {
//     int n,n2;
//     cin>>n>>n2;
//     cout<<gcd(n,n2);
// }