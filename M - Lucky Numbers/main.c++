#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int a, b, c = -1 ;
    cin>>a>>b;
 
    for(int i = a; i <= b; i++) 
    { 
    
        bool check = 0;
        int n = i;
        while(n)
        {
            int num = n % 10;     
            if(num != 7 && num != 4)
            check = 1;
            n /= 10;  
        } 
        if(check == 0)
        {
        cout<<i<<" ";
        c++;
        }
    }
    if(c ==-1)
    cout<<-1<<"\n";
 
}
