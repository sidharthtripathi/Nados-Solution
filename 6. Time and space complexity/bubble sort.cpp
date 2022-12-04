 #include <bits/stdc++.h>
using namespace std;
void bubble(vector <int> &a){
	int n = a.size();
	for(int i = 0 ; i<n-1 ; i++){
	for(int j = 1; j<n-i ; j++){
		if(a[j-1]>a[j]){
			//swap them
			int temp = a[j-1];
			a[j-1] = a[j];
			a[j] = temp;
		}
	}
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
bubble(a);
for(int &i :a)
cout<<i<<" ";

}