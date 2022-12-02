#include <iostream>
using namespace std;
void shift(int a[],int n);
int main(){
int n;
cin>>n;
int spc = 2*n - 3;
int pnum = 1;
for(int i = 1; i<=n ; i++){
    int num = 1;
    for(int j = 1; j<=pnum ; j++){
        cout<<num<<"\t";
        num++;
    }
    for(int j = 1 ; j<=spc ; j++){
        cout<<"\t";
    }
    num--;
    if(i==n){
        num=n-1;
        pnum--;
    }
    for(int j = 1; j<=pnum ; j++){
        cout<<num<<"\t";
        num--;
    }
    cout<<endl;
    pnum++;
    spc=spc-2;
}




}
