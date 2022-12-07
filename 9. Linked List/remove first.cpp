class node{
public:
	int data;
	node* next;
	node(int temp){
		data = temp;
		next = NULL;
	}

};
void remove_first(node* &head){
	if(head == NULL)
		return;
	node* temp = head;
	head = head->next;
	delete temp;
}
