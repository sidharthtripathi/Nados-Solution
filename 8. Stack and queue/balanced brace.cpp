#include <iostream>
using namespace std;
#include <stack>
bool check(char open , char close){
	if(open == '(' and close == ')')
		return true;
	else if(open == '{' and close == '}')
		return true;
	else if(open == '[' and close == ']')
		return true;
	else 
	return false;
}

bool balanced_brace(string s){
stack <char> c;
for(int i = 0; i<s.length() ; i++){
	if(s[i] == '(' or s[i] == '{' or s[i] == '[')
		c.push(s[i]);
	else if(s[i] == ')' or s[i] == '}' or s[i] == ']'){
		if(c.size() == 0)
			return false;
		else if(check(c.top(),s[i]))
			c.pop();
		else
			return false;
	}
}
if(c.size()==0)
return true;
else
return false;

}
int main(){
string s; getline(cin,s);
cout<<balanced_brace(s);


}