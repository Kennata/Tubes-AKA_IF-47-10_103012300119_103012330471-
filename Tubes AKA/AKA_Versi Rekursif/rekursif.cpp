#include <iostream>
#include "rekursif.h"
using namespace std;

string generateDummyName(int index) {
    return "Contact_" + to_string(index);
}

int sentinelLinearSearchRecursive(string contacts[], int size, const string& target, int index) {
    // Basis kasus: jika elemen ditemukan sebelum sentinel
    if (contacts[index] == target) {
        return index;
    }

    // Jika mencapai akhir array tanpa menemukan elemen
    if (index == size) {
        return -1;
    }

    // Rekurens: periksa elemen berikutnya
    return sentinelLinearSearchRecursive(contacts, size, target, index + 1);
}
