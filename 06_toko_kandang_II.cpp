#include <iostream>
using namespace std;

int main() {
    int luas[4][3] = {
        {225 * 335, 299 * 278, 300 * 250},
        {215 * 394, 144 * 718, 300 * 290},
        {200 * 400, 240 * 333, 142 * 619},
        {314 * 298, 411 * 198, 333 * 222}
    };

    int total = 0; // Variabel untuk menyimpan total luas
     int count = 0; // Variabel untuk menghitung jumlah kandang

    // Menghitung total luas dengan batasan
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (luas[i][j] >= 80000) { // Hanya tambahkan jika luas >= 80000
                total += luas[i][j]; // Menambahkan nilai luas ke total
                count++; // Menghitung kandang yang memenuhi syarat
            }
        }
    }

    // Menampilkan total luas
    cout << count << endl;

    return 0;
}
