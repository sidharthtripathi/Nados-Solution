    #include <iostream>
    using namespace std;
    #include <cmath>
    int main(){
    int a;
    cin>>a;
    int ite=0;
    int rot;
    cin>>rot;
    int ans=0;
    while(a>0){
        if(ite<rot){
           ans = ans + (a%10)*pow(10,ite+rot+1);
        }
        else{
            ans=ans + (a%10)*pow(10,ite-rot);
        }
        a=a/10;
        ite++;
    }
    cout<<ans;
    }

