#include <iostream>
#include <vector>
using namespace std;
void target_sum(int* a , int n , int target , vector <int> ans){
if(n==-1)
	return;
if(target ==  0){
	for(int &i : ans)
		cout<<i<<" ";
	cout<<endl;
	return;
}

//either you pick or do not pick first element then proceed with rem ques
	//pickup
	ans.push_back(a[0]);
	target_sum(a+1,n-1,target-a[0],ans);
// then you don't pick and proceed ahead
	ans.pop_back();
	target_sum(a+1, n-1 , target , ans);


}
int main(){
	
int n; cin>>n;
int* a = new int[n];
for(int i = 0 ; i<n ; i++)
	cin>>a[i];
int target; cin>>target;
vector <int> ans;
target_sum(a,n,target,ans);



}