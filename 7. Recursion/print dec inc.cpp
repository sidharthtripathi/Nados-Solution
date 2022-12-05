#include <bits/stdc++.h>
using namespace std;
void print_dec_inc(int n){
	if(n==0)
		return;
	cout<<n<<endl;
	print_dec_inc(n-1);
	cout<<n<<endl;
}
int main(){
	print_dec_inc(5);


}