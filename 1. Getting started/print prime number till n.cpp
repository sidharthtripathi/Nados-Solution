    #include <iostream>
    using namespace std;
    bool isprime(int a);
    int main(){
        int a;
        cin>>a;
        for(int i =1 ; i<=a ; i++){
           if(isprime(i))
              cout<<i<<endl;
      }
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
