#include <bits/stdc++.h>
using namespace std;
int fun(int n){
	if(n==1)return 2;
	else if(n==2)return 4;
	else if(n==3)return 7;
	else return fun(n-1)+fun(n-2)+fun(n-3);
}
int main (){
	int n;
	cin>>n;
	cout<<fun(n);
}
