#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int str = n;
int spc =0;
for(int i = 1; i<=n ; i++){
    for(int j = 1; j<=spc ; j++){
        cout<<"\t";
    }
    for(int j = 1 ; j<=str; j++){
        if(i>1 and i<=n/2 and j>1 and j<str)
        cout<<"\t";
        else
            cout<<"*\t";
    }
    cout<<endl;
    if(i>n/2){
        spc--;
        str=str+2;
    }
    else{
        spc++;
        str = str - 2;
    }
}




}
