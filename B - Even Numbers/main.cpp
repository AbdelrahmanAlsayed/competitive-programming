   #include <bits/stdc++.h>
    using namespace std;
    int main(void)
    {
        int n;
        cin>>n;
        for(int i = 1; i <= n; i++)
        {
            if(i % 2 == 0)
                cout<<i<<endl;
            else if(n < 2)    
                cout<<"-1";
        
        }
    }