 #include <bits/stdc++.h>
using namespace std;
//brute force solution 
void string_compress(string &s){
	// ans is with numbers
	// ans 2 is without numbers
	string ans2 = "";
	string ans = "";
	ans = ans + s[0];
	ans2 = ans2 + s[0];
	int count = 1;
	for(int i = 1 ; i<s.length() ; i++){
		if(s[i]==s[i-1]){
			count++;
		}
		else{
			char c = count + 48;
			if(count !=1)
			ans = ans + c;
			ans = ans + s[i];
			ans2 = ans2 + s[i];
			count = 1;
		}
	}
	char c = count + 48;
	ans = ans + c;
	cout<< ans<<endl<<ans2;

}

int main(){
string s;
cin>>s;
//s = s + a;
string_compress(s);

}
