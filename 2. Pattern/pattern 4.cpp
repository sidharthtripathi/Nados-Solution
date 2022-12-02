#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int spc=0;
int str=n;
for(int i =1 ; i<=n ; i++){

    for(int j=1; j<=i-1; j++){
        cout<<"\t";
    }
    spc++;
    for(int j=1; j<=str; j++){
        cout<<"*\t";
    }
    str--;
    cout<<endl;
}

}


