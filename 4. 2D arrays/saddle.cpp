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
int saddle(vector <vector <int>> &a){
	int n = a.size();
	int m = a[0].size();
	for(int i = 0 ; i<n ; i++){
		int mini = 0;
		for(int j = 1 ; j<m ; j++){
			if(a[i][j]<a[i][mini])
				mini = j;
		}
		// once you get mini in that row, check
		// if that is also max in that column
		bool found = false;
		for(int k = 0 ; k<n ; k++){
			if(a[k][mini] > a[i][mini]){
				found = true;
				break;
			}
		}
		if(found == false)
			return a[i][mini];

	}
	return -1;
}

int main(){
int n;cin>>n;
int m; cin>>m;
vector <vector <int>> ques;
fill_array(ques,n,m);
cout<<saddle(ques);

}
