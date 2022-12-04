 #include <bits/stdc++.h>
using namespace std;
void merge(vector <int> &a , vector <int> &b){
	if(a.size()==0 or b.size()==0)
		return;
	int i = 0;
	int n = a.size();
	int m = b.size();
	while(i<n){
		if(b[0]<a[i]){
			//swap them
			int temp = b[0];
			b[0] = a[i];
			a[i] = temp;
			// then fix the array b
			// thus putting b[0] value at right position
			for(int j = 0; j<m-1 ; j++){
				if(b[j]>b[j+1]){
					//swap
					int temp = b[j];
					b[j] = b[j+1];
					b[j+1] = temp;
				}
				else
					break;
			}
		}
		i++;
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
int m; cin>>m;
vector <int> b;
for(int i = 0 ; i<m ; i++){
	int temp;
	cin>>temp;
	b.push_back(temp);
}
merge(a,b);
for(int &i : a)
cout<<i<<" ";
for(int & i : b)
cout<<i<<" ";

}