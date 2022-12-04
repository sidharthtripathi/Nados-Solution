 #include <bits/stdc++.h>
using namespace std;
vector <int> merge(vector <int> &a , vector <int> &b){
	int n = a.size();
	int m = b.size();
	vector <int> c;
	int i = 0;
	int j = 0;
	while(i<n and j<m){
		if(a[i]<=b[j]){
			c.push_back(a[i]);
			i++;
		}
		else{
			c.push_back(b[j]);
			j++;
		}
	}
	// once you get of loop
	// it can be due two one of these reason
	if(i>=n){
		// then fill remaining with b
		while(j<m){
			c.push_back(b[j]);
			j++;
		}
	}
	else if(j>=m){
		// then fill with a
		while(i<n){
			c.push_back(a[i]);
			i++;
		}
	}
return c;
}

int main(){
vector <int> a;
int n; cin>>n;
for(int i = 0 ; i<n ; i++){
	int temp;
	cin>>temp;
	a.push_back(temp);
}
int m; cin>>m;
vector <int> b;
for(int i = 0 ; i<m ; i++){
	int temp;
	cin>>temp;
	b.push_back(temp);
}
vector <int> c = merge(a,b);
for(int &i : c)
cout<<i<<" "; 

}