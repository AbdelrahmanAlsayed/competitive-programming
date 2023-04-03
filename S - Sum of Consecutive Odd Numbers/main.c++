#include <bits/stdc++.h>
using namespace std;
int main (void)
{
    int t;
    cin>>t;
 
        int x, y;
    for (int i = 0 ; i < t ; i++)
    {
        cin>>x>>y;
 
        int minn= min(x,y);
        int maxx= max(x,y);
 
            int sum = 0;
        for (int j = minn+1 ; j < maxx ; j++)
        {
            if(j % 2 != 0 && maxx - minn != 1 )
            {
                sum = sum + j;
            }
        }
        cout<<sum<<endl;
        
    }
    
}