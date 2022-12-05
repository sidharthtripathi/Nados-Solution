 #include <bits/stdc++.h>
using namespace std;
void swap(vector <int> &a , int i , int j){
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}
void sort012(vector <int> &a){
	int n = a.size();
	int i = 0 , j = 0 , k = n-1;
	while(j<=k){
		if(a[j]==0){
			swap(a,i,j);
			i++;
			j++;
		}
		else if(a[j]==1){
			j++;
		}
		else{
			swap(a,j,k);
			k--;
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
//int pivot; cin>>pivot;
sort012(a);
for(int &i : a){
	cout<<i<<" ";
}

}