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

	bool paths(TreeNode* root_node ,int target, vector<int> &p){
		if(root_node->data==target){
			p.push_back(root_node->data);
			return true;
		}
		for(TreeNode* &i : root_node->children){
			if(paths(i,target,p)==true){
				p.push_back(root_node->data);
				return true;
			}
		}
		return false;

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
		vector <int> p;
		int target; cin>>target;
		paths(root_node,target,p);
		for(int i : p){
			cout<<i<<" ";
		}
	}