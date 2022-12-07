class node{
public:
	int data;
	node* next;
	node(int temp){
		data = temp;
		next = NULL;
	}

};
void add_first(node* &head , int data){
	node* newnode = new node(data);
	newnode->next = head;
	head = newnode;
return;
}