#include <iostream>
using namespace std;
#include <vector>
class TreeNode{
public:
	int data;
	vector <TreeNode*> children;
	TreeNode(int data){
		this->data = data;
	}
};

TreeNode* make_tree(){
//cout<<"Enter data:";
int data; cin>>data;
TreeNode* newtreenode = new TreeNode(data);
//cout<<"Enter childrens: ";
int n; cin>>n;
for(int i = 0 ; i<n; i++){
	newtreenode->children.push_back(make_tree()); 
}
return newtreenode;
}
void print_tree(TreeNode* treenode){


//print self data
	cout<<treenode->data<<" : ";
// then thier children's data
	for(int i = 0 ; i<treenode->children.size() ; i++){
		cout<<treenode->children[i]->data<<" , ";
	}
	cout<<endl;
	for(int i = 0 ;i<treenode->children.size() ; i++){
		print_tree(treenode->children[i]);
	}

}

TreeNode* max_node(TreeNode* rootnode){
	if(rootnode == NULL){
		return NULL;
	}
	//int maxi = rootnode->data;
	TreeNode* max_n = rootnode;
	for(int i = 0 ; i<rootnode->children.size() ; i++){
		TreeNode* temp = max_node(rootnode->children[i]);
		if(temp->data > max_n->data){
			max_n = temp;
		}
	}
	return max_n;

}
int main(){
	
TreeNode* tree = make_tree();
cout<<max_node(tree)->data;
}

