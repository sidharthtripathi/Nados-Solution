#include <iostream>
using namespace std;
void shift(int a[],int n);
int main(){
int n;
cin>>n;
int spc = n/2;
int pnum = 1;
int num = 1;
for(int i = 1 ; i<=n ; i++){
    for(int j = 1 ; j<=spc ; j++){
        cout<<"\t";
    }
    int cval = num;
    for(int j = 1; j<=pnum ; j++){
        cout<<cval<<"\t";
        if(j>pnum/2){
            cval--;
        }
        else{
            cval++;
        }
    }
    cout<<endl;
    if(i>n/2){
        pnum=pnum-2;
        spc++;
        num--;
    }
    else{
        pnum=pnum+2;
        spc--;
        num++;
    }

}


}
