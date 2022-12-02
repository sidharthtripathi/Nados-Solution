    #include <iostream>
    using namespace std;
    bool isprime(int a);
    int main(){
    cout<<isprime(5);
      }

    bool isprime(int a){
    if(a==1){
        return false;
    }
    int ite=2;
    while(ite<a){
        if(a%ite==0){
            return false;
        }
        ite++;
    }
    return true;
    }
