#include <iostream>
#include <cmath>

using namespace std ;

class BSTDugum {
public :
	int veri;
	BSTDugum* pSol;
	BSTDugum* pSag;
	
	BSTDugum(int veri);
	void Ekle(int item);
	BSTDugum* Ara(int item);
	void AgacYazdir();
};
BSTDugum::BSTDugum(int veri){
	pSol = pSag = NULL;
	this->veri = veri;

}

void BSTDugum::Ekle(int item){
	if(veri > item){ 
		if(pSol) 
			return pSol->Ekle(item);
		BSTDugum* pYeni = new BSTDugum(item);
		pSol = pYeni;
	}
	else if (veri< item){ 
		if(pSag) 
			return pSag->Ekle(item);
	}
}
BSTDugum* BSTDugum::Ara(int item){
	if(item<veri){
		if(pSol)
			return pSol->Ara(item);
		else
			return NULL;
	}
	else if(item>veri){
		if(pSag)
			return pSag->Ara(item);
		else
			return NULL;
	}
	else
		return this;
}
//int BSTDugum::SagdanMinGetir(){
//	BSTDugum* temp = this;
//	while(temp && temp->pSol != NULL)
//		temp = temp->pSol;
//	return temp->veri;
//}

void BSTDugum::AgacYazdir(){
	if(this != NULL)
		cout << this->veri << " ";
		if(pSol != NULL)
			pSol->AgacYazdir();
		if(pSag != NULL)
			pSag->AgacYazdir();
}
int main() {


	BSTDugum* kok = new BSTDugum(11);
	kok->Ekle(5);
	kok->Ekle(15);
	kok->Ekle(3);
	kok->Ekle(7);
	kok->Ekle(5);
	kok->Ekle(13);
	kok->Ekle(17);
	kok->Ekle(1);

	cout << "Agac yapisi" << endl;
	kok->AgacYazdir();
	cout << endl;
	return 0;
}
