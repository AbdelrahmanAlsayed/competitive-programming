#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    float a, b, result;
	char op;
	cin>>a>>op>>b;
    
	switch(op) {
	case'*':
	cout<<a*b;
	break;
 
	case'/':
	cout<<a/b;
	break;
 
	case'+':
	cout<<a+b;
	break;
 
	case'-':
	cout<<a-b;
	break; 
    }
}
