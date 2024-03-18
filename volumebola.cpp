#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14;

// Fungsi untuk menghitung volume bola
double hitungVolumeBola(double r) {
    return (4.0 / 3.0) * PI * pow(r, 3);
}

int main() {
    double r;

    // Input jari-jari bola
    cout << "Masukkan jari-jari bola: ";
    cin >> r;

    // Hitung volume bola
    cout << "Volume bola adalah: " << hitungVolumeBola(r) << endl;
}