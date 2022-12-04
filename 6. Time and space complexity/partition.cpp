 #include <bits/stdc++.h>
using namespace std;
void partition(vector <int> &a , int pivot){
	int i = 0 , j = a.size()-1;
	while(i<=j){
		if(a[i]<=pivot){
			i++;
		}
		else{
			// swap with j
			int temp = a[j];
			a[j] = a[i];
			a[i] = temp;
			j--;
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
int pivot; cin>>pivot;
partition(a,pivot);
for(int &i : a){
	cout<<i<<" ";
}

}