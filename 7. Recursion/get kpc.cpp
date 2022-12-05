#include <bits/stdc++.h>
using namespace std;
vector <string> get_kpc(vector <string> &keys , string keyPress){
	//base case
	if(keyPress.length()==0){
		vector <string> base_case = {""};
		return base_case;
	}

	vector <string> r_combo = get_kpc(keys,keyPress.substr(1));
	int f_key = keyPress[0] - 48;
	string f_key_combo = keys[f_key];
	vector <string> f_ans;
	for(int i = 0 ; i<f_key_combo.length() ; i++){
		for(int j = 0 ; j<r_combo.size() ; j++){
			f_ans.push_back(f_key_combo[i] + r_combo[j]);
		}
	}
	return f_ans;

}
int main(){
	
string keyPress; cin>>keyPress;
vector <string> keys = {".:","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};
vector <string> kpc = get_kpc(keys,keyPress);
for(string &s : kpc)
cout<<s<<endl;
}