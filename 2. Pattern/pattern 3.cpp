#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int spc=n-1;
int str=1;
for(int i =1 ; i<=n ; i++){
    for(int j=1; j<=spc; j++){
        cout<<"\t";
    }
    for(int j=1; j<=i; j++){
        cout<<"*\t";
    }
    str++;
    spc--;
    cout<<endl;
}

}


