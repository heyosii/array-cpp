#include <iostream>
using namespace std;

int main() {
    // Luas kandang per toko dan merek (dalam cm²)
    int luas[4][3] = {
        {225 * 335, 299 * 278, 300 * 250}, // Toko 1
        {215 * 394, 144 * 718, 300 * 290}, // Toko 2
        {200 * 400, 240 * 333, 142 * 619}, // Toko 3
        {314 * 298, 411 * 198, 333 * 222}  // Toko 4
    };

    // Harga jual per cm² untuk setiap merek
    int harga_jual[3] = {100, 120, 150};
    int totalPenjualan[3] = {0}; // Array untuk menyimpan total hasil penjualan per merek

    // Menghitung total luas dan hasil penjualan per merek
    for (int i = 0; i < 4; i++) { // Loop untuk setiap toko
        for (int j = 0; j < 3; j++) { // Loop untuk setiap merek
            totalPenjualan[j] += luas[i][j] * harga_jual[j]; // Menghitung total penjualan
        }
    }

    // Menampilkan total hasil penjualan untuk setiap merek
    for (int j = 0; j < 3; j++) {
        cout << totalPenjualan[j] << endl;
    }

    return 0; // Mengembalikan 0 dari main
}
