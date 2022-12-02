#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int str = n/2 + 1;
int spc = n/2;
for(int i = 1 ; i<= n ; i++){
    for(int j = 1 ; j<=str ; j++){
        cout<<"*\t";
    }

    for(int j = 1 ; j<=spc ; j++){
        cout<<"\t";
    }

    for(int j = 1 ; j<=str ; j++){
        cout<<"*\t";
    }
    if(i>n/2)
        str++;
    else
        str--;
    if(i>n/2)
        spc=spc-2;
    else
        spc=spc+2;


    cout<<endl;
}
}


