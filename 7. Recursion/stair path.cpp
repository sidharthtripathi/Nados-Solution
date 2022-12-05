#include <bits/stdc++.h>
using namespace std;
vector <string> stair_path(int n){
	if(n==0){
		vector <string> base_case = {""};
		return base_case;
	}
	if(n<0){
		vector <string> base_case;
		return base_case;
	}
	vector <string> f_ans;
	// if jumping form n-1
	vector <string> path1 = stair_path(n-1);
	for(int i = 0; i<path1.size() ; i++){
		f_ans.push_back("1" + path1[i]);
	}
	//if jump from n-2
	vector<string> path2 = stair_path(n-2);
	for(int i = 0; i<path2.size() ; i++){
		f_ans.push_back("2" + path2[i]);
	}
	//if jump from n-3
	vector<string> path3 = stair_path(n-3);
	for(int i = 0; i<path3.size() ; i++){
		f_ans.push_back("3" + path3[i]);
	}
	return f_ans;

}
int main(){
	vector <string> ans = stair_path(3);
	for(string &s : ans)
		cout<<s<<endl;

}