 #include <bits/stdc++.h>
using namespace std;
void first_and_last(int* a , int n , int val){
	//finding last index
	int low = 0 , high = n-1;
	int mid;
	int last = -1;
	while(low<=high){
		mid = (low+high)/2;
		if(a[mid]>val){
			high = mid -1;
		}
		else if(a[mid]<val){
			low = mid + 1;
		}
		else{
			last = mid;
			low = mid + 1;
		}
	}

	//finding first index
	low = 0;
	high = n-1;
	int first = -1;
	while(low<=high){
		mid = (low+high)/2;
		if(a[mid]>val){
			high = mid -1;
		}
		else if(a[mid]<val){
			low = mid + 1;
		}
		else{
			first = mid;
			high = mid - 1;
		}
	}
cout<<first<<" "<<last;

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
first_and_last(a,n,val);
}
