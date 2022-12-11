#include <iostream>
using namespace std;
#include <stack>
void stock_span(int* a , int n ){
// brute force solution
	int b[n];
	cout<<1<<" ";
	for(int i = 1; i<n; i++ ){
		bool found = false;
		for(int j = i-1 ; j>=0 ; j--){
			if(a[j]>a[i]){
				cout<<i-j<<" ";
				found = true;
				break;
			}
		}
		if(found == false)
		cout<<i+1<<" ";
	}

}
// optimal approach
void stock_span2(int* a , int n ){
int b[n];
b[0] = 1;
stack <int> c;
c.push(0);
for(int i =  1; i<n; i++){
	while(c.size()!=0 and a[i]>a[c.top()]){
		c.pop();
	}
	if(c.size()==0){
		b[i] = i+1;
	}
	else{
		b[i] = i-c.top();
	}
	c.push(i);

}

for(int i = 0 ;i<n ; i++)
	cout<<b[i]<<" ";


}


int main(){
int n; cin>>n;
int* a = new int[n];
for(int i = 0 ; i<n ; i++)
	cin>>a[i];
stock_span2(a,n);


}