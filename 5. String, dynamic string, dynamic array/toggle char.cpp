 #include <bits/stdc++.h>
using namespace std;
//brute force solution 
void toggle_char(string &s){
	for(int i = 0 ; i<s.length() ; i++){
		if(s[i]>=65 and s[i]<=90)
			s[i] = s[i] + 32;
		else 
		s[i] = s[i] - 32;
	}
}

int main(){
string s;
cin>>s;
//s = s + a;
toggle_char(s);
cout<<s;
}
