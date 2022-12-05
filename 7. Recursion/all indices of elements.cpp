#include <bits/stdc++.h>
using namespace std;
vector <int> all_indices(int* a , int s , int e , int target){
	//base case
	if(s==e){
		vector <int> base_case;
		if(a[s] == target){
			 base_case.push_back(s);
		return base_case;
	}
		else
			return base_case;
	}
	vector <int> ans = all_indices(a,s+1,e,target);
	if(a[s] == target){
		ans.push_back(s);
		return ans;
	}
	else
		return ans;

}
int main(){
	
	int a[5] = {101,2,33,2,33};
	int target; cin>>target;
	vector <int> ans = all_indices(a,0,4,target);
	for(int &i : ans)
		cout<<i<<" ";

}