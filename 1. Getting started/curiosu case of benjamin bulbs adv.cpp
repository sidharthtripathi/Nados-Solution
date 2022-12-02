#include<iostream>
using namespace std;
int main(){
int bulbs,flucs;
cout<<"No. of bulbs and flucs with space: ";
cin>>bulbs>>flucs;
int bulb_array[bulbs]{0};
for(int i =1 ; i<=flucs ; i++){
        int ite =1;
    for(int j = i ; j<=bulbs ; j=i*ite){

        if(bulb_array[j-1]==0){
            bulb_array[j-1]=1;
        }
        else if(bulb_array[j-1]==1){
            bulb_array[j-1]=0;
        }
    ite++;
    }
}
cout<<"Bulbs which are ON are: "<<endl;
for(int i = 0 ; i < bulbs ; i++){
    if(bulb_array[i]==1){
        cout<<i+1<<endl;
    }


}




}
