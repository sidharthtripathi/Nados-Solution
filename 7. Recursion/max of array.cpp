#include <bits/stdc++.h>
using namespace std;
int max_inArray(int* a , int s , int e){
	//logrithmic approach
	if(s==e){
		return a[e];
	}
	int mid = (s+e)/2;
	int m1 = max_inArray(a,s,mid);
	int m2= max_inArray(a,mid+1,e);
	return max(m1,m2);
}
int main(){
	
	int a[5] = {101,2,33,4,506};
	cout<<max_inArray(a,0,4);

}