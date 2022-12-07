class node{
public:
	int data;
	node* next;
	node(int temp){
		data = temp;
		next = NULL;
	}

};
void add_last(node* &head , int data){
node* newnode = new node(data);
if(head == NULL){
	head = newnode;
	return;
}
node* temp = head;
while(temp->next != NULL)
	temp = temp->next;
temp->next = newnode;


}