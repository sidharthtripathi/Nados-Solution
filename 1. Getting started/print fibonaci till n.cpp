    #include <iostream>
    using namespace std;
    bool isprime(int a);
    int main(){
        int a;
        cin>>a;
        int first_val = 0;
        int second_val =1;
        int ans = first_val+second_val;
        cout<<first_val<<endl<<second_val<<endl;
        while(ans<=a){
            cout<<ans<<endl;
            first_val=second_val;
            second_val=ans;
            ans=first_val+second_val;
        }
      }


