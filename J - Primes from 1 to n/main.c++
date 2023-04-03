#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, num;
    cin>>n;     // n = 10
    bool check = 0;
    for(int i = 2 ; i <= n ; i++)  // 2 3 "4" 5 6 7 8 9 
    {
        bool prime = 0 ;
        for(int j = 2 ; j < i ; j++) // 2 3 //  
        {
            if( i % j == 0)
            {
                prime = 1;
                break;
            }
        }
            if(prime == 0 )
            cout<<i<<" "; 
    }
    
 
}   
