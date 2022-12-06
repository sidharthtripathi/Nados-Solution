#include <bits/stdc++.h>
using namespace std;
void print_kpc(string keyPress , string ans , vector <string> &keyCombo){
	if(keyPress.length() == 0){
		cout<<ans<<endl;
		return;
	}
	int keys_stroke = keyPress[0] - 48;
	string key_combo = keyCombo[keys_stroke];
	for(int i = 0 ; i<key_combo.length() ; i++){
		char put_in = key_combo[i];
		print_kpc(keyPress.substr(1) , ans + put_in , keyCombo);
	}

}
int main(){
string s;cin>>s;
vector <string> keyCombo = {".:,","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};
print_kpc(s , "" , keyCombo);
}