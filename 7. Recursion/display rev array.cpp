#include <bits/stdc++.h>
using namespace std;
void display_arr(int* a , int s , int e){
	if(s==e){
		cout<<a[s]<<" ";
		return;
	}
	display_arr(a,s+1,e);
	cout<<a[s]<<" ";
}
int main(){
	
	int a[5] = {1,2,3,4,5};
	display_arr(a,0,4);

}