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
LinkedList odd_even(LinkedList a){
LinkedList even;
LinkedList odd;
node* temp = a.head;
while(temp!=NULL){
	if(temp->data%2 == 0)
		even.push(temp->data);
	else
		odd.push(temp->data);
	temp = temp->next;
}
odd.tail->next = even.head;
return odd;

}
int main(){
LinkedList a;
int n; cin>>n;
for(int i = 0 ; i<n ;i++){
	int temp; cin>>temp;
	a.push(temp);
}
LinkedList ans = odd_even(a);
print_LinkedList(ans.head);



}