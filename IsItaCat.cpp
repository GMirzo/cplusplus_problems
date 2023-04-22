#include <bits/stdc++.h>
#include <sstream>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		string a;
		cin>>n>>a;
		transform(a.begin(), a.end(), a.begin(), [](unsigned char c){ return tolower(c); });
		auto s= unique(a.begin(), a.end());
        a.erase(s, a.end());
        if(a=="meow")cout<<"YES\n";
        else cout<<"NO\n";
		
	}
}
