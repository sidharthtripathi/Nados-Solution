 #include <bits/stdc++.h>
using namespace std;
int find_ele(int* a , int n , int target){
	for(int i = 0 ; i<n; i++)
		if(a[i]==target)
			return i;

	return -1;
}

int main(){
int n; cin>>n;
int* a = new int[n];
for(int i = 0 ; i<n ; i++)
cin>>a[i];
int target; cin>>target;
cout<<find_ele(a,n,target);
}
