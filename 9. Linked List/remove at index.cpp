class node{
public:
	int data;
	node* next;
	node(int temp){
		data = temp;
		next = NULL;
	}

};
void remove_at(node* &head , int pos){
	//zero based indexing
	if(pos == 0){
		head = head->next;
		delete head;
	}
	int i = 0;
	node* temp = head;
	while(i<pos-1){
		temp = temp->next;
		i++;
	}
	temp->next = temp->next->next;
	delete temp->next;
}