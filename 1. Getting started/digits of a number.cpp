    #include <iostream>
    using namespace std;
    #include <vector>
    int digits(int a);
    int main(){
        int a;
        cin>>a;
        int ite=0;
        int num[digits(a)]{0};
        while(a>0){
            num[ite]=a%10;
            a=a/10;
            ite++;
        }
        for(int i = ite-1; i>=0 ; i--){
            cout<<num[i]<<endl;

       }
      }
    int digits(int a){
        int ite=0;
    while(a>0){
        a=a/10;
        ite++;
    }
    return ite;

    }

