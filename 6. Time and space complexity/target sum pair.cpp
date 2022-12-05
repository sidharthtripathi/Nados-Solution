 #include <bits/stdc++.h>
using namespace std;
vector <vector <int>> target_sum(vector <int> &a, int target){
	sort(a.begin(),a.end());
	vector <vector <int>> ans;
	int i = 0 , j = a.size()-1;
	while(i<=j){
		if(a[i]+a[j]>target){
			j--;
		}
		else if(a[i]+a[j]<target){
			i++;
		}
		else{
			vector <int> temp = {a[i],a[j]};
			ans.push_back(temp);
			i++;
			j--;

		}
	}
	return ans;
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