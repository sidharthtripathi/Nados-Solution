 #include <bits/stdc++.h>
using namespace std;
void rev_array(int* a , int s , int e){
	while(s<e){
		int temp = a[s];
		a[s] = a[e];
		a[e] = temp;
		s++;
		e--;
	}
}
void rotate_array(int* a , int n , int k){
	if(k<0){
		k = -k;
		k = n-k; 
	}
	if(k>n){
		k = k%n;
	}
	if(k==0 or n==1)
		return;

	rev_array(a,0,n-k-1);
	rev_array(a,n-k,n-1);
	rev_array(a,0,n-1);



}

int main(){
int n; cin>>n;
int* a = new int[n];
for(int i = 0 ; i<n ; i++)
cin>>a[i];
int k; cin>>k;
rotate_array(a,n,k);
for(int i = 0 ; i<n ; i++)
	cout<<a[i]<<" ";
}
