#inculde <iostream>

using namespace std;

struct Node{
	int itme;
	Node* sag;
	Node* sol;
};

int pre_order(Node* kok){
	cout << kok->itme << " " ;
	pre_order(kok->sol);
	pre_order(kok->sag);
	
}
int post_order(Node* kok){
	post_order(kok->sol);
	post_order(kok->sag);
	
}
int in_order(Node* kok){
	in_order(kok->sol);
	cout<< kok->itme << " ";
	in_order(kok->sag);
}

int main(){
	
	
	Node* kok = new Node(8);
	Node* kok = new Node(7);
	Node* kok = new Node(3);
	Node* kok = new Node(1);
	Node* kok = new Node(9);
	
	cout << "in_order result :" ;
	in_order(kok);
	cout << endl;
}
