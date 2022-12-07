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
int kth_from_end(node* head , int k){
node* temp1 = head;
node* temp2 = head;
int i = 0;
while(temp2->next != NULL){
if(i<k){
temp2 = temp2->next;
i++;
}
else{
	temp1 = temp1->next;
	temp2 = temp2->next;
}

}
return temp1->data;


}
int main(){
node a(1);
node b(2);
node c(3);
node d(4);\
a.next = &b;
b.next = &c;
c.next = &d;
cout<<kth_from_end(&a,2);

}