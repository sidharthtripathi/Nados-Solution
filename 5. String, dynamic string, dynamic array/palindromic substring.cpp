 #include <bits/stdc++.h>
using namespace std;
//brute force solution 
bool palindrome(string &s){
	int i = 0 , e = s.length()-1;
	while(i<e){
		if(s[i]!=s[e])
			return false;
		i++;
		e--;
	}
	return true;
}
void palindromic_substring(string &s){
	for(int i = 0 ; i<s.length() ; i++){
		string substr = "";
		for(int j = i ; j<s.length() ; j++){
			substr = substr + s[j];
			if(palindrome(substr))
				cout<<substr<<" ";
		}
	}
}

int main(){
string s;
cin>>s;
palindromic_substring(s);

}
