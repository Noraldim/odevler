#include <iostream>
using namespace std;

const int MAX = 10; // Max size of the heap

class Heap {
public:
    Heap() : ES(0) {}

    int SolCocukGetir(int i) { return 2 * i + 1; }
    int SagCocukGetir(int i) { return 2 * i + 2; }
    int EbeveynGetir(int i) { return (i - 1) / 2; }
    
    bool Ekle(int e);
    bool Getir(int &e);
    bool HeapOlustur(int a[], int es);
    
    void Print(); // Function to print the heap array
    
private:
    int Veri[MAX];
    int ES;
    
    void HeapifyUp(int i);
    void HeapifyDown(int i);
};

// Implementing the Ekle function
bool Heap::Ekle(int e) {
    if (ES == MAX)
        return false;

    ES++;
    Veri[ES - 1] = e;
    HeapifyUp(ES - 1);
    return true;
}
// Implementing the HeapifyUp function
void Heap::HeapifyUp(int i) {
    while (i != 0 && Veri[EbeveynGetir(i)] > Veri[i]) {
        swap(Veri[i], Veri[EbeveynGetir(i)]);
        i = EbeveynGetir(i);
    }
}

// Implementing the Print function
void Heap::Print() {
    for (int i = 0; i < ES; i++) {
        cout << Veri[i] << " ";
    }
    cout << endl;
}

int main() {
    Heap heap;
    
    heap.Ekle(5);
    heap.Ekle(3);
    heap.Ekle(8);
    heap.Ekle(1);
    heap.Ekle(9);
    
    heap.Print(); // This will print the current state of the heap

    return 0;
}

