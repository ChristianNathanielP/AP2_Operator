#include <iostream>
using namespace std;

int main() {
    float alas, tinggi, volume;

    cout << "Masukkan panjang alas prisma: ";
    cin >> alas;
    cout << "Masukkan tinggi prisma: ";
    cin >> tinggi;

    // Hitung volume prisma
    volume = alas * tinggi;

    cout << "Volume prisma adalah: " << volume << endl;

    
}
