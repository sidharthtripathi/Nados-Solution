#include <bits/stdc++.h>
using namespace std;
void print_inc(int n){
	if(n==1){
		cout<<n<<endl;
		return;
	}
	print_inc(n-1);
	cout<<n<<endl;
}
int main(){
	
print_inc(5);

}