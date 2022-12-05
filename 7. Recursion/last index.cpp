#include <bits/stdc++.h>
using namespace std;
int last_index(int* a , int s , int e , int target){
	if(s==e){
		if(a[s] == target)
			return s;
		else
			return -1;
	}
	if(a[e] == target)
		return e;
	else
	return last_index(a,s, e -1, target);
	

}
int main(){
	
	int a[5] = {101,2,33,2,33};
	int target; cin>>target;
	cout<<last_index(a,0,4,target);

}