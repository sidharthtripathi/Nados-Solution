#include <iostream>
using namespace std;
void print_encoding(string s , string ans){
if(s.length()==0){
	cout<<ans<<endl;
	return;
}
if(s[0]=='0'){
	cout<<ans<<endl;
	return;
}
//calling by taking first digit
char a = s[0];
int b = a - 48;
char c = b + 96;
if(s.length()>=1 and b<=26)
print_encoding(s.substr(1),ans+c);
//calling by taking first two digit
char d = s[1];
int e = b*10 + (d - 48);
char f = e + 96;
if(s.length()>=2 and e<=26)
print_encoding(s.substr(2), ans + f);


}

int main(){
print_encoding("655196", "");


}