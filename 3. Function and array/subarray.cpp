 #include <bits/stdc++.h>
using namespace std;
void subarray(int* a , int n ){
	for(int i = 0 ; i<n ;i++){
	for(int j = i ; j<n; j++){
		for(int k = i ; k<=j ; k++){
			cout<<a[k]<<" ";
		}
		cout<<endl;
	}
}
}

int main(){
int n; cin>>n;
int* a = new int[n];
for(int i = 0 ; i<n ; i++){
int temp;
cin>>temp;
a[i] = temp;
}
subarray(a,n);
}
