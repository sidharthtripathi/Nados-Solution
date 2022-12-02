#include<iostream>
using namespace std;
int main(){
int n ;
cin>>n;
int spc = n/2;
int arrow=n/2;
int str=1;
for(int i =1 ; i<=n ; i++){
    if(i!=n/2+1){
    for(int j =1 ; j<= spc ; j++){
        cout<<"\t";
    }
    }
    if(i==n/2+1){
        for(int j=1 ; j<= arrow ; j++){
            cout<<"*\t";
        }
    }
    for(int j =1 ; j<= str ; j++){
        cout<<"*\t";
    }
    if(i>n/2){
        str--;
    }
    else{
        str++;
    }
    cout<<endl;
}

}


