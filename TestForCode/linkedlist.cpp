#include <iostream>

using namespace std;

class linkedList{
	struct Node{
		int item ;
		Node*next;
	
	};
	Node*front;
	Node*last;
	int length ;
	
public:
	linkedList(){
		front = last = NULL;
		length = 0;
		
	}
	bool isEmpty(){
		return length == 0;
	}
	void AddFront(int element){
		Node*newNode = new Node();
		newNode->item = element;
		if(isEmpty()){
			front= last = newNode;
			newNode->next = NULL;	
		}else{
			newNode->next = front;
			front = newNode;
		}
		length++;
	}
	void AddBack(int element){
		Node*newNode = new Node();
		newNode->item = element;
		if(isEmpty()){
			front = last = newNode;
			newNode->next= NULL;
		}else{
			last->next = newNode;
			last = newNode;}
		length++;
			
		}
	AddPos(int pos , int element){
		if(pos < 0 || pos > length){
			cout << "out of index" << endl ;
		}
		else{
			Node*newNode = new Node();
			newNode->item = element;
			if(pos == 0){
				AddFront(element);
			}else if(pos == length){
			    AddBack(element);
			}else {
				Node*Cur = front;
				for(int i = 2; i < pos; i++){
					Cur = Cur->next;
				}
					newNode->next = Cur->next;
					Cur->next = newNode;
					length++;
			}
		}
		
			}		
	void print(){
			Node*Cur = front;
			while(Cur!=NULL){
				cout<< Cur->item << " " ;
				Cur = Cur->next;
			}
		}
	void romeveF(){
		Node*Cur = front;
		if(length == 0){
			cout << "there is no element to delet" ; 
		}else if (length == 1){
			front = last = NULL;	
			delete Cur;
		}else{
			front = Cur->next;
			delete Cur;
		}
		length--;
	}
	void removeB(){
		Node*head = front->next;
		Node*pre = front;
		while(head != last){
			pre = head;
			head = head->next;
		}
		  
		pre->next = NULL;
		last = pre
		
		length --;
	}
};


int main(){
	linkedList s;
	s.AddBack(7);
	s.AddBack(1);
	s.AddBack(3);
	s.AddBack(17);
	s.AddPos(2,33);
 	s.removeB();
	s.print();
	
}
