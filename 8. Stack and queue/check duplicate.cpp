#include <iostream>
using namespace std;
#include <stack>
bool duplicate(string s){
stack <char> c;
for(int i = 0 ;i<s.length() ; i++){
	if(s[i]!=')')
		c.push(s[i]);
	else if(s[i] == ')'){
		if(c.top() == '(')
			return true;
		else{
			while(c.top()!='('){
				c.pop();
			}
			c.pop();
		}
	}
}	
return false;	

}
int main(){
cout<<duplicate("(a+b) + (( c + d ))");


}