 #include <bits/stdc++.h>
using namespace std;
int digit_frequency(int n , int d){
	int count = 0;
	while(n>0){
		if(n%10 == d)
			count++;
		n = n/10;
	}
	return count;
}

int main(){
int n; cin>>n;
int d; cin>>d;
cout<<digit_frequency(n,d);
}
