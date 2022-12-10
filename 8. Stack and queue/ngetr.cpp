#include <iostream>
using namespace std;
#include <stack>
#include <vector>
//brute force solution first
void ngetr(int* a , int n){
int found;
for(int i = 0 ; i<n-1 ; i++){
	found = false;
	for(int j = i+1 ; j<n ; j++){
		if(a[j]>a[i]){
			cout<<a[j]<<" ";
			found = true;
			break;
		}
	}
	if(found == false)
	cout<<-1<<" ";
}
cout<<-1;

}

// optimal approach using stack
void ngetrOP(int* a , int n){
vector <int> ans;
stack <int> s;
s.push(a[n-1]);
ans.push_back(-1);
for(int i = n-2 ; i>=0 ; i--){
// i will look for it's answer in stack
	//keep removing smaller one
	while(s.size()!=0 and a[i]>=s.top())
		s.pop();
	if(s.size() == 0)
			ans.push_back(-1);
	else{
		ans.push_back(s.top());
	}
	s.push(a[i]);
}

for(int i = n- 1; i>=0 ; i--)
	cout<<ans[i]<<" ";


}

int main(){
	
int n; cin>>n;
int* a = new int[n];
for(int i = 0 ; i<n ;i++){
	cin>>a[i];
}
ngetr(a,n);
cout<<endl;
ngetrOP(a,n);
}