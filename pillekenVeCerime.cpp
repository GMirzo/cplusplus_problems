//pilleken ve cerime
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>a(n);
	for (int i=0;i<n;i++)cin>>a[i];
	int sum=0;
	for (int i=n-1;i>=0;){
		if(i==1 or i==0)break;
		sum+=min(a[i-1],a[i-2]);
		if(min(a[i-1],a[i-2])==a[i-1])i--;
		else i-=2;
	}

	cout<<sum+a[n-1];
}
