#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
for (int i = 1; i<=n ; i++){
    for(int j = 1; j<=n ; j++){
        if(((i==j or i+j==n+1)and (i>n/2)) or (j==1 or j==n))
        cout<<"*\t";
        else
            cout<<"\t";

    }
    cout<<endl;
}




}
