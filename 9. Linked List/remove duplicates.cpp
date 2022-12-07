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
class LinkedList{
public:
node* head = NULL;
node* tail = NULL;
void push(int data){
node* newnode = new node(data);
if(head == NULL){
head = newnode;
tail = newnode;	
}
else{
tail->next = newnode;
tail = newnode;
}
}

};
void print_LinkedList(node* head){
	node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}
void remove_dup(LinkedList a){
	// remaing nodes are still in heap
	// they are not cleared after remove duplicates
		node* head = a.head;
		if(head->next == NULL)
			return;
		node* temp1 = head;
		node* temp2 = head->next;
		while(temp2!=NULL){
			if(temp2->data != temp1->data){
				temp1 = temp1->next;
				temp1->data = temp2->data;
			}
			temp2 = temp2->next;
		}
		temp1->next = NULL;

}
int main(){
LinkedList a;
int n; cin>>n;
for(int i = 0 ; i<n ;i++){
	int temp; cin>>temp;
	a.push(temp);
}
remove_dup(a);
print_LinkedList(a.head);



}