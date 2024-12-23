#include <iostream>
#include "AKA.h"
#include <string>
#include <cstdlib>
using namespace std;
int sentinelLinearSearchIterative(string contacts[], int size, const string& target) {
    string sentinel = target;  // Tambahkan sentinel
    contacts[size] = sentinel; // Letakkan sentinel di akhir array

    int i = 0;
    while (contacts[i] != target) {
        i++;
    }

    // Jika ditemukan sebelum sentinel, kembalikan indeksnya
    if (i < size) {
        return i;
    }
    return -1; // Tidak ditemukan
}

string generateDummyName(int index) {
    return "Contact_" + to_string(index);
}
