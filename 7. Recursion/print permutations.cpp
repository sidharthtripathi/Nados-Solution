#include <bits/stdc++.h>
using namespace std;
void permutation(string ques , string ans){
if(ques.length()==0){
	cout<<ans<<endl;
	return;
}
//choosing the first char to come
	for(int i = 0 ; i<ques.length() ; i++){
		permutation(ques.substr(0,i) + ques.substr(i+1), ans + ques[i]);
	}

}
int main(){
string ques; cin>>ques;
permutation(ques, "");

}