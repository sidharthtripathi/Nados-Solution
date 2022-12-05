#include <bits/stdc++.h>
using namespace std;
int pow_log(int base , int power){
	if(base == 0){
		return 0;
	}
	if(power == 0)
		return 1;
	int h_ans = pow(base , power/2);
	if(power%2==0)
		return h_ans*h_ans;
	else
		return h_ans*h_ans*power;
}
int main(){
	
	cout<<pow_log(2,4);

}