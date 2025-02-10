#include <iostream>
#include <queue>
using namespace std ;

struct Node{
	int itme;
	Node*left;
	Node*right;
	Node(int x): itme(x) , left(NULL), right(NULL){};
	
};

int postOrder(Node* root){
	if(root == NULL) return 0;
	postOrder(root->left);
	postOrder(root->right);
	cout << root-> itme << " " ;
}

int PreOrder(Node* root){
	if(root == NULL) return 0 ;
	cout << root-> itme << " " ;
	PreOrder(root->left);
	PreOrder(root->right);

} 

int inOrder(Node* root){
	if(root == NULL) return 0;
	inOrder(root->left);
	cout << root-> itme << " " ;
	inOrder(root->right);
}

int FBS(Node* root){
	if(root == NULL) return 0;
	queue<Node*> q;
	q.push(root);
	while(!q.empty()){
		Node* curr = q.front() ;
		cout << curr->itme << " ";
		if(curr->left != NULL)
			q.push(curr->left);
		if(curr->right != NULL)
			q.push(curr->right);
		
		q.pop();
	}
}
int main(){
	Node *root = new Node(70);
	root->left = new Node(60);
	root->right = new Node(80);
	root->right->right = new Node(90);
	root->right->left = new Node(75);
	root->left->right = new Node(65);
	lllroot->left->left = new Node(55);
	
	cout << "pre-order : ";
	PreOrder(root);
	cout << endl;	
	
	
	cout << "post-order : ";
	postOrder(root);
	cout << endl;

	cout << "in-order : ";
	inOrder(root);
	cout << endl;
	
	cout << "Level order traversal: ";
    FBS(root);
    cout << endl;
	
	
	
}
