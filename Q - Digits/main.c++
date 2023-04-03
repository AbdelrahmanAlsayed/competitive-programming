#include <bits/stdc++.h>
using namespace std;
int main (void)
{
    int num;
    cin>>num;
    
    for(int i = 0; i < num; i++)
    {
            long long t , numbers;
            cin>>numbers;
            if(numbers == 0)
            cout<<0;
        while (numbers != 0)
        {
            cout<<numbers % 10 <<" ";
            numbers /= 10;
        }
        cout<<endl;
    }
}