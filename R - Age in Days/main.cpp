#include <bits/stdc++.h>
using namespace std;
int main(void)
{ 
	int days, year, month ;
	cin>>days;
 
	year = days / 365;
	days = days % 365;
 
	month = days / 30;
	days = days % 30;
 
 
	cout<<year<<" years"<<"\n";
	cout<<month<<" months"<<"\n";
	cout<<days<<" days"<<"\n";
}
