#include <iostream>
#include <stack>
using namespace std;
class BinaryTree{
public:
	int data;
	BinaryTree* left;
	BinaryTree* right;
	BinaryTree(int x){
		data = x;
		left = NULL;
		right = NULL;
	}
};

BinaryTree* make_bt(int* a , int n ){
if(a[0] == -1)
	return NULL;
stack <BinaryTree*> c;
BinaryTree* root_node = new BinaryTree(a[0]);
c.push(root_node);
for(int i = 1 ; i<n ; i++){
	if(a[i] == -1){
		c.pop();
		continue;
	}
	BinaryTree* temp = new BinaryTree(a[i]);
	if(c.top()->left == NULL)
		c.top()->left = temp;
	else if(c.top()->right == NULL)
		c.top()->right = temp;
	c.push(temp);
}
return root_node;

}

void display(BinaryTree* root_node){
	if(root_node == NULL)
		return;
	if(root_node->left == NULL)
		cout<<". -> ";
	else
	cout<<root_node->left->data<<" -> ";
	cout<<root_node->data;
	if(root_node->right == NULL)
		cout<<" <- .";
	else
		cout<<" <- "<<root_node->right->data;
	cout<<endl;
	if(root_node->left != NULL)
		display(root_node->left);
	if(root_node->right != NULL)
		display(root_node->right);
	return;
}

void multisolver(BinaryTree* root_node, int &size , int& sum, int &maxi , int &height , int &c_h){
	sum = sum + root_node->data;
	if(root_node->data > maxi)
		maxi = root_node->data;
	size++;
	if(c_h > height)
		height = c_h;
	if(root_node->left!=NULL){
		c_h++;
		multisolver(root_node->left , size , sum ,maxi , height , c_h);
		c_h--;
	}
	if(root_node->right != NULL){
		c_h++;
		multisolver(root_node->right , size , sum , maxi , height , c_h);
		c_h--;
	}

}

int main(){
int a[] = {50,25,12,-1,37,30,-1,-1,-1,75,62,70,-1,-1,87,-1,-1,-1};
BinaryTree* root_node =  make_bt(a,sizeof(a)/sizeof(a[0]));
int size = 0 , sum = 0 , maxi = 0 , height = 0 , c_h = 0;
multisolver(root_node,size, sum , maxi , height , c_h);
cout<<size<<" "<<sum<<" "<<maxi<<" "<<height;

}