#include <iostream>
using namespace std;
#include <stack>
#include <vector>
class TreeNode{
public:
int data;
vector <TreeNode*> children;
TreeNode(int x){
	data = x;
}

};

TreeNode* make_tree(int* a , int n){
if(a[0] == -1)
	return NULL;
TreeNode* root_node;
stack <TreeNode*> c;
for(int i = 0 ; i<n ; i++){
	if(a[i] == -1){
		c.pop();
		continue;
	}
	TreeNode* newnode = new TreeNode(a[i]);
	if(c.size() == 0 ){
		root_node = newnode;
		c.push(newnode);
	}
	else{
	c.top()->children.push_back(newnode);
	c.push(newnode);
	}

}
return root_node;

}

int height(TreeNode* root_node){
if(root_node == NULL)
	return -1;
int max_h = 0;
if(root_node->children.size() == 0 )
return max_h;
for(TreeNode* &i : root_node->children){
	int temp = height(i);
	if(temp>max_h)
		max_h = temp;
}
return max_h + 1;

}


int main(){
	int a[] = {10,20,50,-1,60,-1,-1,30,70,-1,80,110,-1,120,-1,-1,90,-1,-1,40,100,-1,-1,-1};
	TreeNode* root_node = make_tree(a,sizeof(a)/sizeof(a[0]));
	cout<<height(root_node);
}	