#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for (int i=0;i<n;i++)
	for (int j=0;j<m;j++)
	cin>>a[i][j];
	int b[n][m];
	b[n-1][0]=a[n-1][0];
	//qiraqlari doldurmaq
	for (int i=n-2;i>=0;i--){
		b[i][0]=b[i+1][0]+a[i][0];
	}
	for (int j=1;j<m;j++){
		b[n-1][j]=b[n-1][j-1]+a[n-1][j];
	}
	//icini doldurmaq
	for (int i=n-2;i>=0;i--){
		for (int j=1;j<m;j++){
			b[i][j]=max(b[i][j-1],b[i+1][j])+a[i][j];
		}
	}
	//indi ise en cox den toplaya bileceyi yolu tapaq
	//stringe yigaq sonrada onu reverse edek
	string c;
	int i=0,j=m-1;
	while(i<n-1 or j>0)
	{
		if(i==n-1){
			c+='R';
			j--;
		}
		else if(j==0){
			c+='F';
			i++;
		}
		else if(b[i][j-1]>b[i+1][j]){
			c+='R';
			j--;
		}
		else {
			c+='F';
			i++;
		
	}
 }
	reverse(c.begin(),c.end());
	cout<<c;

	
}
