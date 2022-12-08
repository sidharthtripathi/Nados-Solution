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

void display_rev(node* head){
	if(head == NULL)
		return;
	display_rev(head->next);
	cout<<head->data<<" ";
}

int main(){
LinkedList a;
int n; cin>>n;
for(int i = 0 ; i<n ;i++){
	int temp; cin>>temp;
	a.push(temp);
}
display_rev(a.head);



}