 #include <bits/stdc++.h>
using namespace std;
void invsere(int* a , int n){
	int b[n];
	for(int i = 0 ; i<n ; i++){
		b[a[i]] = i;
	}
	for(int i = 0 ; i<n ; i++)
		a[i] = b[i];
}

int main(){
int n; cin>>n;
int* a = new int[n];
for(int i = 0 ; i<n ; i++){
int temp;
cin>>temp;
a[i] = temp;
}
invsere(a,n);
for(int i = 0 ; i<n ; i++)
	cout<<a[i]<<" ";
}
