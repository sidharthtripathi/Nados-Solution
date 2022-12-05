#include <bits/stdc++.h>
using namespace std;
vector <string> get_sub(string s){
	if(s.length() == 0){
		vector <string> base_case = {""};
		return base_case;
	}

	vector <string> ans = get_sub(s.substr(1));
	vector <string> f_ans;
	for(int i = 0 ; i<ans.size() ; i++){
		f_ans.push_back(ans[i] + "");
		f_ans.push_back(ans[i] + s[0]);
	}
	return f_ans;
}
int main(){
	
string s; cin>>s;
//cout<<s.substr(1);
vector <string> ans = get_sub(s);
for(string &i : ans)
	cout<<i<<endl;

}