

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

	void cielAndfloor(TreeNode* root_node, int data , int &ciel , int &floor){
		if(root_node->data > data){
			if(root_node->data<ciel)
				ciel = root_node->data;
		}
		if(root_node->data < data){
			if(root_node->data > floor){
				floor = root_node->data;
			}
		}
		for(TreeNode* &i : root_node->children){
			cielAndfloor(i,data,ciel,floor);
		}
	}
	void max_edges(TreeNode* root_node , int &max_e , int &curr_e){
		if(curr_e>max_e)
			max_e   = curr_e;
		// let me call for my kiddos
		for(TreeNode* &i : root_node->children){
			// before calling increment the current node
			curr_e++;
			max_edges(i,max_e,curr_e);
			curr_e--;

		}
	}
	int main(){
		int a[] = {10,20,-50,-1,-60,-1,-1,30,-70,-1,80,-110,-1,120,-1,-1,90,-1,-1,40,-100,-1,-1,-1};
		TreeNode* rn1 = make_tree(a,sizeof(a)/sizeof(a[0]));
		int curr_e = 0 , max_e = 0;
		max_edges(rn1,max_e,curr_e);
		cout<<max_e;



	}