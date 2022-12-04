 #include <bits/stdc++.h>
using namespace std;
//brute force solution 
bool is_prime(int n){
	if(n==1)
		return false;
	for(int i = 2; i<n ; i++){
		if(n%i==0)
			return false;
	}
	return true;
}
void remove_prime(vector <int> &a){
	vector <int> b;
	for(int i = 0 ; i<a.size() ; i++){
		if(!is_prime(a[i]))
			b.push_back(a[i]);
	}
	for(int &i : b)
		cout<<i<<" ";
}

int main(){
vector <int> a;
int n; cin>>n;
for(int i = 0 ; i<n ; i++){
	int temp;
	cin>>temp;
	a.push_back(temp);
}
remove_prime(a);

}