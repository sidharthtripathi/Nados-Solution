#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int out_spc=n/2;
int in_spc=0;
for(int i = 1; i<=n ; i++){
        if(i==2)
        in_spc=1;
    for(int j = 1; j<=out_spc ; j++){
        cout<<"\t";
    }
    cout<<"*\t";
    for(int j = 1; j<=in_spc ; j++){
        cout<<"\t";
    }
    if(!(i==1 or i==n))
    cout<<"*\t";
    cout<<endl;
    if(i>n/2)
        in_spc=in_spc-2;
    else
        in_spc=in_spc+2;
    if(i>n/2)
        out_spc++;
    else
        out_spc--;




}

}
