#include <bits/stdc++.h>
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
void reverse_linkedList(node* &head){
	node* temp = NULL;
	node* temp1 = head;
	node* temp2 = head->next;
	while(temp2!=NULL){
		temp1->next = temp;
		temp = temp1;
		temp1 = temp2;
		temp2 = temp2->next;
	}
	//covering last node
	temp1->next = temp;
	head = temp1;
}
void print_node(node* head){
	node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}
int main(){
node a(1);
node b(2);
node c(3);
node d(4);
a.next = &b;
b.next = &c;
c.next = &d;
node* head = &a;
reverse_linkedList(head);
print_node(head);


}