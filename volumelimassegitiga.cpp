#include <iostream>
using namespace std;

// Fungsi untuk menghitung volume limas segitiga
float volumeLimasSegitiga(int a, int b, int h) {
    float vol = (0.1666) * a * b * h;
    return vol;
}

int main() {
    int a, b, h;

    cout << "Masukkan panjang alas segitiga: ";
    cin >> a;
    cout << "Masukkan tinggi segitiga: ";
    cin >> b;
    cout << "Masukkan tinggi limas: ";
    cin >> h;

    // Hitung volume limas segitiga
    float volume = volumeLimasSegitiga(a, b, h);

    cout << "Volume limas segitiga adalah: " << volume << endl;

    
}
