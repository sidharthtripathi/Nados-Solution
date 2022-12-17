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



int main(){
int a[] = {50,25,12,-1,37,30,-1,-1,-1,75,62,70,-1,-1,87,-1,-1,-1};
BinaryTree* root_node =  make_bt(a,sizeof(a)/sizeof(a[0]));



}