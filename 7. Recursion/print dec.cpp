#include <bits/stdc++.h>
using namespace std;
void print_dec(int n){
	if(n==1){
		cout<<n<<endl;
		return;
	}
	cout<<n<<endl;
	print_dec(n-1);
}
int main(){
	
print_dec(5);

}