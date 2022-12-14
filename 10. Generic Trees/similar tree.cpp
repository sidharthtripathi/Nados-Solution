

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

	bool similar_trees(TreeNode* rn1 , TreeNode* rn2){
		if(rn1->children.size()!=rn2->children.size())
			return false;
		for(int i = 0 ; i<rn1->children.size() ; i++){
			if(similar_trees(rn1->children[i] , rn2->children[i])==false)
				return false;
		}
		return true;
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
		int b[] = {10,20,-1,30,-1,40,-1};
		TreeNode* rn1 = make_tree(a,sizeof(a)/sizeof(a[0]));
		TreeNode* rn2 = make_tree(b,sizeof(a)/sizeof(b[0]));
		cout<<similar_trees(rn1,rn2);
	}