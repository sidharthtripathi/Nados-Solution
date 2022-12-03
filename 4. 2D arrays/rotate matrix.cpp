 #include <bits/stdc++.h>
using namespace std;
// using extra space
void rotate90(vector <vector <int>> &a){
	int n = a.size();
	int m = a[0].size();
	vector <vector <int> > b;
	for(int j = 0 ; j<m ; j++){
		vector <int> arr_temp;
		for(int i = n-1 ; i>=0 ; i--){
			arr_temp.push_back(a[i][j]);
		}
		b.push_back(arr_temp);
	}

	a = b;
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
void print_arr(vector <vector <int>> &a){
	for(int i = 0 ; i<a.size() ; i++){
		for(int j = 0 ; j<a[i].size() ; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
// just printing in rotated fashion
void print_rotated90(vector <vector<int>> &a){
		int n = a.size();
		int m = a[0].size();
		for(int j = 0 ; j<m ; j++){
		for(int i = n-1 ; i>=0 ; i--){
			cout<<(a[i][j])<<" ";
		}
		cout<<endl;
	}
}
void transpose(vector <vector <int>> &a){
	//swapign aij with aji
	int n = a.size();
	int m = a[0].size();
	for(int i = 0 ; i<n; i++){
		for(int j = 0 ; j<=i ; j++){
			//swaping
			int temp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = temp;
		}
	}
}
// rotating array without extra space
void efficient_rotate(vector <vector<int>> &a){
	// transpose then reverse each array
	int n = a.size();
	int m = a[0].size();
	transpose(a);
	//then reverse each array
	for(int i = 0 ; i<n;  i++){
		int s = 0 , e = m-1;
		while(s<e){
			int temp = a[i][s];
			a[i][s] = a[i][e];
			a[i][e] = temp;
			s++;
			e--;
		}
	}


}

int main(){
int n;cin>>n;
int m; cin>>m;
vector <vector <int>> ques;
fill_array(ques,n,m);
efficient_rotate(ques);
print_arr(ques);

}
