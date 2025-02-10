#include <iostream>
using namespace std;

const int KUYRUK_MAX = 100; // Max size of the circular queue

class DaireselKuyruk {
public:
    DaireselKuyruk() {
        KB = KS = ES = 0;
        for (int i = 0; i < KUYRUK_MAX; ++i) {
            D[i] = -1;
        }
    }

    bool Ekle(int item) {
        if ((KS + 1) % KUYRUK_MAX == KB) {
            return false; // Queue is full
        }
        D[KS] = item;
        KS = (KS + 1) % KUYRUK_MAX;
        return true;
    }

    int Cikar() {
        if (KB == KS) {
            return -1; // Queue is empty
        }
        int item = D[KB];
        D[KB] = -1; // Optional: reset the value for clarity
        KB = (KB + 1) % KUYRUK_MAX;
        return item;
    }

    bool Bosmu() {
        return KB == KS;
    }

    void yazdir() {
        if (Bosmu()) {
            cout << "Queue is empty" << endl;
            return;
        }
        int i = KB;
        while (i != KS) {
            cout << D[i] << " ";
            i = (i + 1) % KUYRUK_MAX;
        }
        cout << endl;
    }

private:
    int D[KUYRUK_MAX]; // Circular queue array
    int KB, KS, ES; // Indices for the queue
};

int f(int k) {
    if (k == 2) return 1;
    if (k == 1) return 1;
    return f(k - 1) + f(k - 2);
}

int main() {
    int temp;
    int a[] = {1, 4, 13, 11, 22}; // Array of integers
    DaireselKuyruk q[2]; // Array of two circular queues
    for (int i = 0; i < 5 ; i++) {
        int k = a[i] % 4; // Calculate the remainder of a[i] divided by 4
        switch (k) {
            case 0: {
                for (int j = 1; j <= 7; j++)
                    q[k].Ekle(f(j)); // Add Fibonacci numbers to queue 0 (q[0])
            } break;
            case 1: {
                for (int j = 7; j > 1; j -= 2)
                    q[k].Ekle(f(j)); // Add Fibonacci numbers to queue 1 (q[1])
            } break;
            case 2: {
                for (int j = 0; j <= f(8); j++)
                    q[k - 2].Cikar(); // Remove items from queue 0 (q[0])
            } break;
            case 3: {
                for (int j = f(8); j >= 1; j -= 2)
                 
                    q[k - 3].Ekle(k); // Add k (which is 3 in this case) to queue 0 (q[0])
            } break;
        }
    }

    // Print the results
    cout << "Queue 0: ";
    q[0].yazdir();

    cout << "Queue 1: ";
    q[1].yazdir();

    return 0;
}

