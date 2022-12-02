#include <iostream>
using namespace std;
int main(){
int marks;
cin>>marks;
if(marks>90){
      cout<<"excellent";
}
else if(marks>80 and marks<=90){
    cout<<"good";
}
else if(marks>70 and marks<=90){
    cout<<"fair";
}
else if(marks>60 and marks<=70){
    cout<<"meets expectation";
}
else{
    cout<<"below par ";
}


}
