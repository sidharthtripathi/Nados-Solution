#include <bits/stdc++.h>
using namespace std;
void print_sub(string s, string ans = ""){
if(s.length()==0){
	cout<<ans<<endl;
	return;
}
// once you pick the first
	print_sub(s.substr(1) , s.substr(0,1) + ans);
// then you don't pick the fist
	print_sub(s.substr(1), ans);

}
int main(){
string s;cin>>s;
print_sub(s);
}