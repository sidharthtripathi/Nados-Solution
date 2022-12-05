#include <bits/stdc++.h>
using namespace std;
vector <string> maze_path(int r , int c){
if(r==c and r==1){
	vector <string> path = {""};
	return path;
}
vector <string> h_path;
vector <string> v_path;
vector <string> f_ans;
//moving horizantally (you can move only if there are c>1)
if(c>1){
	h_path = maze_path(r,c-1);
	for(int i = 0 ; i<h_path.size() ; i++){
		f_ans.push_back("h" + h_path[i]);
	}

}
//moving vertically (you can move only we there are r>1)
if(r>1){
	v_path = maze_path(r-1,c);
	for(int i = 0 ; i<v_path.size() ; i++){
		f_ans.push_back("v" + v_path[i]);
	}
}
return f_ans;


}
int main(){
vector <string> ans = maze_path(3,3);
for(string &s : ans){
	cout<<s<<endl;
}

}