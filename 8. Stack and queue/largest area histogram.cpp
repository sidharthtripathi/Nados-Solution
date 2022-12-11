#include <iostream>
using namespace std;
#include <stack>
int largest_area(int* a , int n ){
// finding next smaller to left for each element
int nsl[n];
stack <int> c; c.push(n-1);
for(int i = n-2 ; i>=0 ; i--){
	while(c.size()!=0 and a[i]<a[c.top()]){
		nsl[c.top()] = i;
		c.pop();
	}
	c.push(i);
}
while(c.size()!=0){
	nsl[c.top()] = -1;
	c.pop();
}
// finding next smaller to right
int nsr[n];
c.push(0);
for(int i = 1 ; i<n; i++){
	while(c.size()!=0 and a[i]<a[c.top()]){
		nsr[c.top()] = i;
		c.pop();
	}
	c.push(i);
}
while(c.size()!=0){
nsr[c.top()] = -1;
c.pop();
}

// now finding the max area
int maxi = 0;
for(int i = 0 ; i<n; i++){
if(a[i]*(nsr[i] - nsl[i] - 1) > maxi)
	maxi = a[i]*(nsr[i] - nsl[i] - 1);
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