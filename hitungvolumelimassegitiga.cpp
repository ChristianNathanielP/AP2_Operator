#include <iostream>
using namespace std;

// Fungsi untuk menghitung volume limas segitiga
double hitungVolumeLimasSegitiga(double alas, double tinggi_limas) {
    return (1.0 / 3.0) * alas * tinggi_limas;
}

int main() {
    double alas, tinggi_limas;

    // Input alas dan tinggi limas segitiga
    cout << "Masukkan alas limas segitiga: ";
    cin >> alas;
    cout << "Masukkan tinggi limas segitiga: ";
    cin >> tinggi_limas;

    // Hitung dan cetak volume limas segitiga
    cout << "Volume limas segitiga adalah: " << hitungVolumeLimasSegitiga(alas, tinggi_limas) << endl;

    return 0;
}