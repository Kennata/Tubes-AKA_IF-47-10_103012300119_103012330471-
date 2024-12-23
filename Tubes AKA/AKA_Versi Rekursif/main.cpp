#include <iostream>
#include "rekursif.h"
#include <iostream>
#include <string>
#include <chrono> // Pustaka untuk pengukuran waktu
using namespace std;
using namespace chrono; // Mempermudah penggunaan tipe data chrono
int main()
{
    const int SIZE = 2000; // Jumlah data dummy
    string contacts[SIZE + 1]; // Tambahkan slot untuk sentinel

    // Mengisi array dengan data dummy
    for (int i = 0; i < SIZE; i++) {
        contacts[i] = generateDummyName(i + 1);
    }

    string target = "Contact_2000"; // Data yang ingin dicari

    // Tambahkan sentinel di akhir array
    contacts[SIZE] = target;

    // Mulai pengukuran waktu
    auto start = high_resolution_clock::now();

    // Jalankan fungsi pencarian rekursif
    int result = sentinelLinearSearchRecursive(contacts, SIZE, target, 0);

    // Akhiri pengukuran waktu
    auto end = high_resolution_clock::now();

    // Hitung durasi eksekusi dalam mikrodetik
    auto duration = duration_cast<microseconds>(end - start);

    // Tampilkan hasil pencarian
    if (result != -1 && result != SIZE) {
        cout << "Kontak \"" << target << "\" ditemukan di indeks " << result << ".\n";
    } else {
        cout << "Kontak \"" << target << "\" tidak ditemukan.\n";
    }

    // Tampilkan waktu eksekusi
    cout << "Waktu eksekusi: " << duration.count() << " mikrodetik.\n";

    return 0;
}
