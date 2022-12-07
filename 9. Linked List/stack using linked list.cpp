#include <iostream>
using namespace std;
class node{
public:
	int data;
	node* next;
	node(int temp){
		data = temp;
		next = NULL;
	}

};
class stacki{
public:
	node* topi = NULL;
	node* below_top = NULL;
	int size = 0;
void pushi(int data){
	size++;
	node* newnode = new node(data);
	if(topi != NULL)
	topi->next = newnode;
	below_top = topi;
	topi = newnode;
}	
int tope(){
	if(size==0)
		return -1;
	return topi->data;
}

};
int main(){

stacki a;
a.pushi(45);
cout<<a.tope();

}