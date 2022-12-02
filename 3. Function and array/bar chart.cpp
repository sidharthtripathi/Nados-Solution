 #include <bits/stdc++.h>
using namespace std;
void bar_chart(int* a , int n){
	//finding max height first
	int maxi = INT_MIN;
	for(int i = 0 ; i<n; i++)
		if(a[i]>maxi)
			maxi = a[i];

	//creating the bar char
	for(int i = maxi ; i>=1 ; i--){
		for(int j = 0 ; j<n ; j++){
			if(a[j]>=i){
				cout<<"*\t";
			}
			else{
				cout<<"\t";
			}
		}
		cout<<endl;
	}
}

int main(){
int n; cin>>n;
int* a = new int[n];
for(int i = 0 ; i<n ; i++)
cin>>a[i];
bar_chart(a,n);
}
