 /*Given N numbers. Count how many of these values are even, odd, positive and negative.
 
Input
First line contains one number N (1 ≤ N ≤ 103) number of values.
 
Second line contains N numbers (-105 ≤ Xi ≤ 105).*/
    #include <bits/stdc++.h>
    using namespace std;
    int main(void)
    {
        int n, num;
        cin>>n;
        int even = 0 , odd = 0, positive = 0, negative = 0;
        for(int i = 0; i < n; i++)
        {
            cin>>num;
            if(num % 2 == 0)
                even++;
            else
                odd ++;
            if(num > 0)
                positive ++;
            else if (num < 0)
                negative ++;  
        }
        cout<<"Even: "<<even<<endl;
        cout<<"Odd: "<<odd<<endl;
        cout<<"Positive: "<<positive<<endl;
        cout<<"Negative: "<<negative<<endl;
}
