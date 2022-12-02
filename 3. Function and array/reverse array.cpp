 #include <bits/stdc++.h>
using namespace std;
void rev_array(int* a , int n){
	int s = 0 , e = n-1;
	while(s<e){
		int temp = a[s];
		a[s] = a[e];
		a[e] = temp;
		s++;
		e--;
	}
}

int main(){
int n; cin>>n;
int* a = new int[n];
for(int i = 0 ; i<n ; i++)
cin>>a[i];
rev_array(a,n);
for(int i = 0 ; i<n ; i++)
	cout<<a[i]<<" ";
}
