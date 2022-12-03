 #include <bits/stdc++.h>
using namespace std;
void exit_point(vector <vector<int>> &a){
int n = a.size();
int m = a[0].size();
int i = 0 , j = 0;
int dir = 0;
while(true){
dir = (dir + a[i][j])%4;;
if(dir == 0){
	i++;
}
else if(dir == 1){
	j++;
}
else if(dir == 2){
	i--;
}
else if(dir == 3){
	j--;
}
// to get out
if(i<0){
	i++;
	break;
}
else if(j<0){
	j++;
	break;
}
else if(i>=a.size()){
	i--;
	break;
}
else if(j>=a[0].size()){
	j--;
	break;
}
}
cout<<i<<" "<<j;

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
exit_point(ques);
}
