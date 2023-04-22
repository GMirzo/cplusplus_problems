//tort meselesi
#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	if(n==0)cout<<1;
	else if(n==1)cout<<2;
	else if(n==2)cout<<4;
	else {
		cout<<pow(2,n)-1;
	}
}
