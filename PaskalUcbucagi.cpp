//Paskal ucbucagi
#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	int a[n][n];
	//massivi 0 ile doldurmaq
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			a[i][j]=0;
		}
	}
	//bir ve ic hesablama
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if(j==0 or j==i)a[i][j]=1;
			else a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	//ekrana cixarma
	for (int i=0;i<n;i++){
		for (int j=0;j<n-i-1;j++){
			cout<<"  ";
		}
		for (int j=0;j<=i;j++){
			cout<<a[i][j]<<"   ";
		}
		cout<<"\n";
	}
	
}
