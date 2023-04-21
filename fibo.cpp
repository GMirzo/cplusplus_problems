//ceyirtke meselesi
#include <bits/stdc++.h>
using namespace std;
int fun(int n){
	int f1=1,f2=2,fn=3;
	if(n==1)return 1;
	else if(n==2)return 2;
	else{
	for (int i=3;i<n;i++){
		f1=f2;
		f2=fn;
		fn=f1+f2;
		
	}
	return fn;
}
}
int main (){
	int n;
	cin>>n;
	cout<<fun(n);
}
