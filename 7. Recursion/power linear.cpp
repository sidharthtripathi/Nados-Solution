#include <bits/stdc++.h>
using namespace std;
int pow_linear(int base , int power){
	if(base == 0)
		return 0;
	if(power == 0)
		return 1;
	return base * pow_linear(base, power-1);
}
int main(){
	
	cout<<pow_linear(2,4);

}