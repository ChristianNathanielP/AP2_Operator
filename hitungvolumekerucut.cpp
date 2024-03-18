#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159265358979323846;

// Fungsi untuk menghitung volume kerucut
double hitungVolumeKerucut(double r, double t) {
    return (1.0 / 3.0) * PI * pow(r, 2) * t;
}

int main() {
    double r, t;

    // Input jari-jari dan tinggi kerucut
    cout << "Masukkan jari-jari kerucut: ";
    cin >> r;
    cout << "Masukkan tinggi kerucut: ";
    cin >> t;

    // Hitung dan cetak volume kerucut
    cout << "Volume kerucut adalah: " << hitungVolumeKerucut(r, t) << endl;

    return 0;
}