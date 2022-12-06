#include <bits/stdc++.h>
using namespace std;
void print_stairs(int n , string ans){
	if(n<0){
		return;
	}
	if(n==0){
		cout<<ans<<endl;
		return;
	}

//if 1st jump is made
	print_stairs(n-1, ans + "1");
// if 2nd jump is made
	print_stairs(n-2, ans + "2");
//if 3rd jump is made
	print_stairs(n-3, ans+"3");


}
int main(){
int n;cin>>n;
print_stairs(n, "");
}