#include <iostream>
using namespace std;
#include <vector>
#include <queue>
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
void print_levelWise(TreeNode* root_node , queue <int> &ans){
if(ans.size() == 0)
	return;
//ans.push(root_node->data);
cout<<ans.front()<<" ";
ans.pop();
for(int i = 0 ; i<root_node->children.size() ; i++){
	ans.push(root_node->children[i]->data);
}
for(int i = 0 ; i<root_node->children.size() ; i++){
	print_levelWise(root_node->children[i],ans);
}



}

int main(){
	
TreeNode* tree = make_tree();
queue <int> ans;
ans.push(tree->data);
//print_tree(tree);
print_levelWise(tree,ans);
}

