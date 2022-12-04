 #include <bits/stdc++.h>
using namespace std;
void insertion(vector <int> &a){
int n = a.size();
for(int i = 0 ; i<n-1 ; i++){
	// assuming till i is sorted
	// we have to put i+1 at right position
	for(int j = i+1 ; j>=1; j--){
		if(a[j]<a[j-1]){
			//swap them
			int temp = a[j];
			a[j] = a[j-1];
			a[j-1] = temp;
		}
		else{
			break;
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
insertion(a);
for(int &i :a)
cout<<i<<" ";

}