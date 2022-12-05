#include <bits/stdc++.h>
using namespace std;
int first_index(int* a , int s , int e , int target){
	if(s==e){
		if(a[s] == target)
			return s;
		else
			return -1;
	}
	if(a[s] == target)
		return s;
	else
	return first_index(a,s+1, e , target);
	

}
int main(){
	
	int a[5] = {101,2,33,2,33};
	int target; cin>>target;
	cout<<first_index(a,0,4,target);

}