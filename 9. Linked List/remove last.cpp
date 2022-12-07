class node{
public:
	int data;
	node* next;
	node(int temp){
		data = temp;
		next = NULL;
	}

};
void remove_last(node* &head){
	if(head == NULL)
		return;
	if(head->next = NULL){
		delete head;
		head = NULL;
	}
	node* temp = head;
	while(temp->next->next != NULL){
		temp = temp->next;
	}
	delete temp->next;
	temp->next = NULL;
	return;
}