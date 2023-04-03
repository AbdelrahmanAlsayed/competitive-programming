#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	int a, b;
	char s;
	cin>>a>>s>>b;
if(s == '=' && a == b || s == '>' && a > b || s == '<' && a < b)
cout<<"Right"<<"\n";
else
cout<<"Wrong"<<endl;
 
}