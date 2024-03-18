#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float tinggi, radius, volume;

    cout << "Masukkan tinggi kerucut: ";
    cin >> tinggi;
    cout << "Masukkan radius kerucut: ";
    cin >> radius;

    // Hitung volume kerucut
    volume = (1.0 / 3) * M_PI * radius * radius * tinggi;

    cout << "Volume kerucut adalah: " << volume << endl; 
}
