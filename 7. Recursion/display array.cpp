#include <bits/stdc++.h>
using namespace std;
void display_arr(int* a , int n){
	if(n==1){
		cout<<a[n-1]<<" ";
		return;
	}
	display_arr(a,n-1);
	cout<<a[n-1]<<" ";
	return;
}
int main(){
	
	int a[5] = {1,2,3,4,5};
	display_arr(a,5);

}