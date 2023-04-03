#include <bits/stdc++.h>
	using namespace std;
	int main(void)
	{ 
		int a, b, c, maxx, minn;
		cin>>a>>b>>c;
 
		maxx = max(a,max(b,c)); 
		minn = min(a,min(b,c));
 
        cout<<minn<<endl;
		if(a == maxx && b == minn || a == minn && b == maxx)
		cout<<c<<endl;
		else if(b == maxx && c == minn || b == minn && c == maxx )
		cout<<a<<"\n";
		else
		cout<<b<<endl;
 
		cout<<maxx<<endl<<endl;
		cout<<a<<endl<<b<<endl<<c<<endl;
	}