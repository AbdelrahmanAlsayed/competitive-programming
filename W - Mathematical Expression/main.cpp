#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	int a, b, c;
	char op1, op2;
    cin>>a>>op1>>b>>op2>>c;
 
	if(op1 == '+' && a + b == c || op1 == '-' && a - b == c || op1 == '*' && a * b == c)
	cout<<"Yes"<<"\n";
	else if(op1 == '+')
	cout<<a+b;
	else if(op1 == '-')
	cout<<a-b;
	else if(op1 == '*')
	cout<<a*b;
}