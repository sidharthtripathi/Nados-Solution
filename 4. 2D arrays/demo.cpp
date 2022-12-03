 #include <bits/stdc++.h>
using namespace std;
void print_array(vector <vector<int>> &ques){
	for(int i = 0 ; i<ques.size() ; i++){
		for(int j = 0 ; j<ques[i].size() ; j++){
			cout<<ques[i][j]<<" ";
		}
		cout<<endl;
	}
}
void fill_array(vector <vector<int >> &ques , int n , int m){
for(int i = 0 ; i<n ; i++){
	vector <int> temp_arr;
	for(int j = 0 ; j<m ; j++){
		int temp;
		cin>>temp;
		temp_arr.push_back(temp);

	}
	ques.push_back(temp_arr);
}
}

int main(){
int n;cin>>n;
int m; cin>>m;
vector <vector <int>> ques;
fill_array(ques,n,m);
print_array(ques);

}
