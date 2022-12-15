

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
	void pre_n_suc(TreeNode* root_node , int state , int &pre , int &suc , int target){
		if(state == 0){
		if(root_node->data == target)			
			state = 1;
			else{
				pre = root_node->data;
			}
		}
		else if(state == 1){
			suc = root_node->data;
			state = 2;
		}

		// calling for child nodes
		for(TreeNode* &i : root_node->children){
			pre_n_suc(i,state,pre,suc,target);
		}


	}	
	int main(){
		int a[] = {10,20,100,-1,111,-1,-1,30,70,80,-1,90,-1,-1,-1,40,50,-1,60,-1,-1,-1};
		TreeNode* rn1 = make_tree(a,sizeof(a)/sizeof(a[0]));
		int target; cin>>target;
		int pre,suc;
		int state = 0;
		pre_n_suc(rn1,state,pre,suc,target);
		cout<<pre<<" "<<suc;


	}