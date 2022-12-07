class node{
public:
	int data;
	node* next;
	node(int temp){
		data = temp;
		next = NULL;
	}

};
void add_at(node* &head , int data , int pos){
	// zero based indexing
	node* newnode = new node(data);
	if(pos == 0){
		newnode->next = head;
		head = newnode;
		return;
	}
	node* temp = head;
	int i = 0 ;
	while(i<pos-1){
		temp = temp->temp;
		i++;
	}
	newnode->next = temp->next;
	temp->next = newnode;
return;
}