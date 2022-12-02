    #include <iostream>
    using namespace std;
    bool isprime(int a);
    int main(){
        int a;
        cin>>a;
        int ite=0;
        while(a>0){
            ite++;
            a=a/10;
        }
        cout<<ite;
      }