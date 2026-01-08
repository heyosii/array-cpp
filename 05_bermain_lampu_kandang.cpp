#include <iostream>
using namespace std;

int main() {
    bool lampu[101];

    // Pada mulanya, seluruh lampu dalam kondisi mati.
    for (int i = 1; i <= 100; i++) {
        lampu[i] = false; // false berarti mati
    }

    // Untuk setiap jam (pukul p),
    for (int p = 1; p <= 10; p++) {
        // untuk setiap lampu nomor i,
        for (int i = 1; i <= 100; i++) {
            // jika i merupakan kelipatan p,
            if (i % p == 0) {
                // tekan saklarnya (ubah statusnya).
                lampu[i] = !lampu[i]; // jika mati, jadi menyala dan sebaliknya
            }
        }
    }

    // Hitung banyaknya lampu yang menyala,
    int count = 0;
    for (int i = 1; i <= 100; i++) {
        if (lampu[i]) {
            count++; // jika lampu[i] true, berarti menyala
        }
    }

    // lalu cetak.
    cout << count << endl;

    return 0;
}
