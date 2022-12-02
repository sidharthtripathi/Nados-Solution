 #include <bits/stdc++.h>
using namespace std;
int span(int* a, int n){
int maxi = INT_MIN, mini = INT_MAX;
for(int i = 0 ; i<n; i++){
	if(a[i]>maxi)
		maxi = a[i];
	if(a[i]<mini)
		mini = a[i];
}
return maxi - mini;

}

int main(){
int n; cin>>n;
int* a = new int[n];
for(int i = 0 ; i<n ; i++)
cin>>a[i];
cout<<span(a,n);
}
