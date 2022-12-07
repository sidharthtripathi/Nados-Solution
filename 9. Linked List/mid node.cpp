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
int mid(node* head){
	if(head == NULL)
		return -1;

	node* temp1 = head;
	node* temp2 = head;
	while(temp2->next != NULL and temp2->next->next != NULL){
		temp1 = temp1->next;
		temp2 = temp2->next->next;
	}
	return temp1->data;
}
int main(){
node a(1);
node b(2);
node c(3);
node d(4);
node e(5);
a.next = &b;
b.next = &c;
c.next = &d;
d.next = &e;
cout<<mid(&a);

}