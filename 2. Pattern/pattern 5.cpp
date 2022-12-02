#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int spc=n/2;
int str=1;
for(int i = 1; i<=n ; i++){

for(int j = 1; j<=spc;j++){
    cout<<"\t";
}
if(i>n/2)
    spc++;
else
    spc--;
for(int j=1 ; j<=str ; j++ ){
    cout<<"*\t";
}
if(i>n/2)
    str=str-2;
else
    str = str+2;
cout<<endl;

}
}


