

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
	int kth_largest(TreeNode* rn , int k){
		int ans = INT_MAX;
		int ciel = INT_MAX, floor = INT_MIN;
		for(int i = 0 ; i<k ; i++){
			cielAndfloor(rn,ans,ciel,floor);
			ans = floor;
			floor = INT_MIN;
		}
		return ans;

	}
	int main(){
		int a[] = {10,20,100,-1,111,-1,-1,30,70,80,-1,90,-1,-1,-1,40,50,-1,60,-1,-1,-1};
		TreeNode* rn1 = make_tree(a,sizeof(a)/sizeof(a[0]));
		int ciel = INT_MAX, floor = INT_MIN;
		int k; cin>>k;
		cout<<kth_largest(rn1,k);



	}