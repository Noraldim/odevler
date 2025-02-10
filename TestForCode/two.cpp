#include <iostream>

using namespace std ;

const int max_size = 100;

class que{
	int front ;
	int rare; 
	int length;
	int item[max_size];
public :
	que(){
		int front = 0;
		int rare = max_size -1;
		int length = 0;

	}
	bool isEmpty(){
		return length == 0;
	}
	void addQue(int Element){
		if(length == max_size){
			cout << "the quess is full " <<endl;
		}else{
			rare = (rare + 1)%max_size;
			item[rare] = Element;
			length++;
		}
	}
	void popQue(){
		if(isEmpty()){
			cout << "the quee is empty" <<endl;
		}else {
			front = (front +1)%max_size;
			length--;
		}
	}

	
	
	
	void print(){
		cout << "[" ;
		for(int i = 0 ; i < rare+1 ; i ++){
			cout << item[i] ;
		}
		cout << "]";
		cout << endl;
	}
};

int main(){
	que q;
	q.addQue(5);
	q.addQue(3);
	q.addQue(1);
	q.print();
}
