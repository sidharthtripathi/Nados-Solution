

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

	void multisolver(TreeNode* root_node, int &size , int &mini , int &maxi){
		size++;
		if(root_node->data > maxi)
			maxi = root_node->data;
		if(root_node->data<mini)
			mini = root_node->data;
		for(TreeNode* &i : root_node->children){
			multisolver(i,size,mini,maxi);
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
		int a[] = {10,20,100,-1,111,-1,-1,30,70,80,-1,90,-1,-1,-1,40,50,-1,60,-1,-1,-1};
		//int b[] = {1,4,6,-1,5,-1,-1,3,7,9,-1,8,-1,-1,-1,2,10,-1,-1,-1};
		TreeNode* rn1 = make_tree(a,sizeof(a)/sizeof(a[0]));
		//TreeNode* rn2 = make_tree(b,sizeof(a)/sizeof(b[0]));
		int mini = rn1->data;
		int maxi = rn1->data;
		int size = 0;
		multisolver(rn1,size,mini,maxi);
		cout<<size<<" "<<maxi<<" "<<mini;
	}