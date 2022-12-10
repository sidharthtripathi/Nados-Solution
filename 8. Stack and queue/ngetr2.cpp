#include <iostream>
using namespace std;
#include <stack>
void ngetr(int* a, int n ){

stack <int> c;
c.push(0);
int b[n];
for(int i = 1; i<n ; i++){
	while(c.size() !=0 and a[i]>a[c.top()]){
		b[c.top()] = a[i];
		c.pop();
	}
	c.push(i);
}
while(c.size()!=0){
	b[c.top()] = -1;
	c.pop();
}

for(int i = 0 ; i<n ; i++){
	cout<<b[i]<<" ";
}

}

int main(){
int n; cin>>n;
int* a = new int[n];
for(int i = 0 ; i<n ; i++)
cin>>a[i];
ngetr(a,n);	


}