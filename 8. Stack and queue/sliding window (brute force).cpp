#include <iostream>
using namespace std;
int maximum(int* a , int n){
	int maxi = a[0];
	for(int i = 0 ; i<n; i++){
		if(a[i]>maxi)
			maxi = a[i];
	}
	return maxi;
}
void sliding_window(int* a, int n , int k){
// i will go from 0 to n-k
	for(int i = 0 ; i<=n-k; i++){
		cout<<maximum(a+i,k)<<" ";
	}

}

int main(){
	
int n; cin>>n;
int* a = new int[n];
for(int i = 0 ;i<n; i++)
	cin>>a[i];
int k; cin>>k;
sliding_window(a,n,k);
}