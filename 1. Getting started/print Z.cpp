#include <iostream>
using namespace std;
int main(){
for(int i = 1;i<=5 ; i++){
    cout<<"*";
}
cout<<endl;
int spc=3;
for(int i =1 ; i<=3; i++){
   for(int i = 1 ; i<=spc ; i++){
    cout<<" ";
   }
   cout<<"*"<<endl;
   spc--;
}
for(int i = 1;i<=5 ; i++){
    cout<<"*";
}


}