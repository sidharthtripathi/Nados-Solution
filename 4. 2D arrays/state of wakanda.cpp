 #include <bits/stdc++.h>
using namespace std;
void print_DownUp(vector <vector <int>> &a){
	int n = a.size();
	int m = a[0].size();
	for(int j = 0 ; j<m ; j++){
		// going down
		if(j%2 == 0){
			for(int i = 0 ; i<n ; i++){
				cout<<a[i][j]<<" ";
			}
		}
		//going up
		else{
			for(int i = n-1 ; i>=0 ; i--)
				cout<<a[i][j]<<" ";
		}
		
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
//print_array(ques);
print_DownUp(ques);
}
