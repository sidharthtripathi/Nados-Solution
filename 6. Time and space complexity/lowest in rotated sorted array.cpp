 #include <bits/stdc++.h>
using namespace std;
int minimum(vector <int> &a){
	int n = a.size();
	int s = 0 , e = n-1;
	int mid;
	while(s<e){
		mid = (s+e)/2;
		if(a[mid] < a[e]){
			e = mid;
		}
		else if(a[mid]>a[e]){
			s = mid + 1;
		}
	}
	return a[s]; 
}

int main(){
vector <int> a;
int n; cin>>n;
for(int i = 0 ; i<n ; i++){
	int temp;
	cin>>temp;
	a.push_back(temp);
}
int target ; cin>>target;
vector <vector <int>> ans = target_sum(a,target);
for(int i = 0 ; i<ans.size();  i++){
	for(int j = 0 ; j<2 ; j++){
		cout<<ans[i][j]<<" ";
	}
	cout<<endl;
}
}