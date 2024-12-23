#include <iostream>
#include "AKA.h"
#include <string>
#include <cstdlib>
#include <chrono> // Pustaka untuk pengukuran waktu
using namespace chrono; // Mempermudah penggunaan tipe data chrono
using namespace std;

int main()
{
     const int SIZE = 350; // Jumlah data dummy
    string contacts[SIZE + 1]; // Tambahkan slot untuk sentinel

    // Mengisi array dengan data dummy
    for (int i = 0; i < SIZE; i++) {
        contacts[i] = generateDummyName(i + 1);
    }

    string target = "Contact_350"; // Data yang ingin dicari

    // Mulai pengukuran waktu
    auto start = high_resolution_clock::now();

    // Jalankan fungsi pencarian
    int result = sentinelLinearSearchIterative(contacts, SIZE, target);

    // Akhiri pengukuran waktu
    auto end = high_resolution_clock::now();

    // Hitung durasi eksekusi dalam mikrodetik
    auto duration = duration_cast<microseconds>(end - start);

    // Tampilkan hasil pencarian
    if (result != -1) {
        cout << "Kontak \"" << target << "\" ditemukan di indeks " << result << ".\n";
    } else {
        cout << "Kontak \"" << target << "\" tidak ditemukan.\n";
    }

    // Tampilkan waktu eksekusi
    cout << "Waktu eksekusi: " << duration.count() << " mikrodetik.\n";

    return 0;
}
