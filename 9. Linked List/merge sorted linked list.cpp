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
LinkedList merge_sorted(LinkedList a , LinkedList b){
	node* temp1 = a.head;
	node* temp2 = b.head;
	LinkedList ans;
	while(temp1 != NULL and temp2 != NULL){
		if(temp1->data<=temp2->data){
			ans.push(temp1->data);
			temp1 = temp1->next;
		}
		else{
			ans.push(temp2->data);
			temp2 = temp2->next;
		}
	}
	if(temp1 == NULL){
		// fill with linked list b
		while(temp2 != NULL){
			ans.push(temp2->data);
			temp2 = temp2->next;
		}
	}
	else if(temp2 == NULL){
		// fill with linked list a
		while(temp1 != NULL){
			ans.push(temp1->data);
			temp1 = temp1->next;
		}
	}
	return ans;
}

int main(){
LinkedList a;
LinkedList b;
int n; cin>>n;
for(int i = 0 ; i<n ;i++){
	int temp; cin>>temp;
	a.push(temp);
}
int m; cin>>m;
for(int i = 0 ; i<m ; i++){
	int temp; cin>>temp;
	b.push(temp);
}

LinkedList ans = merge_sorted(a,b);
print_LinkedList(ans.head);



}