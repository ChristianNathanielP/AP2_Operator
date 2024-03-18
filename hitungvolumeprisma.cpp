#include <iostream>
using namespace std;

// Fungsi untuk menghitung volume prisma
double hitungVolumePrisma(double alas, double tinggi_prisma) {
    return alas * tinggi_prisma;
}

int main() {
    double alas, tinggi_prisma;

    // Input alas dan tinggi prisma
    cout << "Masukkan alas prisma: ";
    cin >> alas;
    cout << "Masukkan tinggi prisma: ";
    cin >> tinggi_prisma;

    // Hitung dan cetak volume prisma
    cout << "Volume prisma adalah: " << hitungVolumePrisma(alas, tinggi_prisma) << endl;

    return 0;
}