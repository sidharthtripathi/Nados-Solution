	// changes needed 
	// not working as of now

	#include <iostream>
	using namespace std;
	#include <stack>
	#include <vector>
	#include <queue>
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

TreeNode* get_leaf(TreeNode* root_node){
	if(root_node->children.size() == 0 ){
		return root_node;
	}
	return get_leaf(root_node->children[0]);
}
void linear(TreeNode* root_node){
// let me linearise all my childs
	for(TreeNode* &i : root_node->children){
		linear(i);
	}

// now joining all my linear childs
	while(root_node->children.size()>1){
		TreeNode* lsn = get_leaf(*((root_node->children.end())-2));
		lsn->children.push_back(*((root_node->children.end())-1));
		root_node->children.erase((root_node->children.end())-1);
	}

}

	void display(TreeNode* root_node){
	cout<<root_node->data<<" -> ";
	for(TreeNode* &i : root_node->children){
		cout<<i->data<<" ";
	}
	cout<<endl;
	for(TreeNode* &i : root_node->children){
		display(i);
	}

	}
	int main(){
		int a[] = {10,20,50,-1,60,-1,-1,30,70,-1,80,110,-1,120,-1,-1,90,-1,-1,40,100,-1,-1,-1};
		TreeNode* root_node = make_tree(a,sizeof(a)/sizeof(a[0]));
		display(root_node);
		cout<<"after modification: "<<endl;
		linear(root_node);
		display(root_node);
	}