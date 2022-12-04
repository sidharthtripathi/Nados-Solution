 #include <bits/stdc++.h>
using namespace std;
void selection(vector <int> &a){
int n = a.size();
for(int i = 0 ; i<n-1; i++ ){
	int maxi = 0;
for(int j = 1; j<n-i; j++){
	if(a[j]>a[maxi])
		maxi = j;
}
//now swap max value's index to last 
int temp = a[maxi];
a[maxi] = a[n-1-i];
a[n-1-i] = temp;
}

}
int main(){
vector <int> a;
int n; cin>>n;
for(int i = 0 ; i<n ; i++){
	int temp;
	cin>>temp;
	a.push_back(temp);
}
selection(a);
for(int &i :a)
cout<<i<<" ";

}