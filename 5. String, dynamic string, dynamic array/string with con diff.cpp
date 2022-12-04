 #include <bits/stdc++.h>
using namespace std;
//brute force solution 
void con_diff(string &s){
	cout<<s[0];
	for(int i = 1; i<s.length() ; i++){
		cout<<s[i] - s[i-1];
		cout<<s[i];
	}
}

int main(){
string s;
cin>>s;
con_diff(s);
}
