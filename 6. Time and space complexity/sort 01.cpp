 #include <bits/stdc++.h>
using namespace std;

void sort01(vector <int> &a){
int i = 0, j = a.size()-1;
while(i<=j){
	if(a[i]==0){
		i++;
	}
	else{
		//swap i and j
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
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
//int pivot; cin>>pivot;
sort01(a);
for(int &i : a){
	cout<<i<<" ";
}

}