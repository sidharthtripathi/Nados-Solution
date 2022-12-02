    #include <iostream>
    using namespace std;
    #include <cmath>
    int main(){
    int a;
    cin>>a;
    int ans=0;
    int ite=1;
    while(a>0 ){
        ans=ans+(ite*pow(10,(a%10)-1));
        a=a/10;
        ite++;
    }
    cout<<ans;
    }

