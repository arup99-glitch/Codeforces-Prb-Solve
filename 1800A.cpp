#include <bits/stdc++.h>
using namespace std;

int main(){

	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		string s; cin>>s;
		string cm = "";

		for(int i = 0; i <n; i++){
			if(tolower(s[i]) == tolower(s[i+1])) continue;
			else cm += tolower(s[i]);
		}

		if(cm == "meow") cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

}
