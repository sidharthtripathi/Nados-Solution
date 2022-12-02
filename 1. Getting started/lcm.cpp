    #include <iostream>
    using namespace std;
    int main(){
    int a,b;
    cin>>a>>b;
    int ite = a;
    while(!(a%ite==0 and b%ite==0)){
        ite--;
    }
    cout<<ite;

    }

