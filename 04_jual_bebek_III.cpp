#include <iostream>
using namespace std;

int main() {
    int beli[10] = {13, 100, 0, 4, 31, 0, 178, 23, 1, 13};
    int jual[10] = {0, 2, 24, 0, 10, 4, 0, 121, 0, 15};
    int tanggal[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int total_bebek = 0; // Variabel untuk menyimpan total keseluruhan

    // Menghitung jumlah bebek dan menampilkan hasil
    for (int i = 0; i < 10; i++) {
        total_bebek += beli[i]; // Perbarui total bebek
        total_bebek -= jual[i]; 
        cout <<  total_bebek << endl; // Menampilkan total bebek
    }
    return 0;
}
