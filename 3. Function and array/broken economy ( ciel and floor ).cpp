 #include <bits/stdc++.h>
using namespace std;
void ciel_and_floor(int* a , int n , int value){
	int ciel = INT_MAX, floor = INT_MIN;
	int s = 0, e = n-1;
	int mid;
	while(s<=e){
		 mid = (s+e)/2;
		 if(a[mid]>value){
		 	ciel = a[mid];
		 	e = mid -1 ;
		 }
		 else if(a[mid]<value){
		 	floor = a[mid];
		 	s = mid + 1;
		 }
		 else{
		 	ciel = a[mid];
		 	floor = a[mid];
		 }

	}
	cout<<floor<<" "<<ciel;
}

int main(){
int n; cin>>n;
int* a = new int[n];
for(int i = 0 ; i<n ; i++){
int temp;
cin>>temp;
a[i] = temp;
}
int val; cin>>val;
ciel_and_floor(a,n,val);
}
