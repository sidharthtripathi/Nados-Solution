#include <iostream>
using namespace std;
#include <stack>
int area(int* a , int n , int i){
int j = i-1, k = i+1;
// checking for j
while(j>=0 and a[j]>=a[i])
	j--;
//checking for k
while(k<n and a[k]>=a[i])
	k++;
return a[i]*(k-j-1);
}
int largest_area(int* a , int n){
	int maxi = 0;
	for(int i = 0 ; i<n ; i++){
		int temp_area = area(a,n,i);
		if(temp_area>maxi)
			maxi = temp_area;
	}

	return maxi;
}
int main(){
int n; cin>>n;
int* a = new int[n];
for(int i = 0 ; i<n ; i++)
	cin>>a[i];
cout<<largest_area(a,n);

}