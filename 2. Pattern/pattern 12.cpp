#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int first=-1;
int second=1;
int sum=0;
for(int i =1 ; i<=n ; i++){
    for(int j = 1 ; j<=i ; j++){
        sum=first+second;
        cout<<sum<<"\t";
        first=second;
        second=sum;
    }
    cout<<endl;


}




}
