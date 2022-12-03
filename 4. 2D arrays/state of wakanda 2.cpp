 #include <bits/stdc++.h>
using namespace std;

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
void print_arr(vector <vector <int>> &a){
	for(int i = 0 ; i<a.size() ; i++){
		for(int j = 0 ; j<a[i].size() ; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
}

void state_wakanda2(vector <vector<int>> &a){
	int n = a.size();
	int m = a[0].size();
	for(int j = 0 ; j<m ; j++){
		int i = 0,k=j;
		while(k<m){
			cout<<a[i][k]<<" ";
			i++;
			k++;
		}
	}
}


int main(){
int n;cin>>n;
int m; cin>>m;
vector <vector <int>> ques;
fill_array(ques,n,m);
state_wakanda2(ques);

}
