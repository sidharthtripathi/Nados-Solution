#include <bits/stdc++.h>
using namespace std;
void print_maze(int r , int c , string ans){
//base case
	if(r==c and r == 1){
		cout<<ans<<endl;
		return;
	}

// if moved horizontally
	//you can move horizontally only when c>1
	if(c>1)
	print_maze(r,c-1,ans + "h");

//if moved vertically
 	// you can move vertically only when r>1
 	if(r>1)
	print_maze(r-1, c , ans + "v");


}
int main(){
//int n;cin>>n;
print_maze(3,3, "");
}