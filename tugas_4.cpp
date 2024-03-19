#include <iostream>
using namespace std;


double hitungVolumePrisma(double luasAlas, double tinggiPrisma) {
    double volume = luasAlas * tinggiPrisma;
    return volume;
}

int main() {
    double luasAlas, tinggiPrisma;

    
    cout << "Masukkan luas alas prisma: ";
    cin >> luasAlas;
    cout << "Masukkan tinggi prisma: ";
    cin >> tinggiPrisma;

    
    if (luasAlas < 0 || tinggiPrisma < 0) {
        cout << "Luas alas dan tinggi prisma tidak boleh negatif." << endl;
        return 1; 
    }

    
    double volumePrisma = hitungVolumePrisma(luasAlas, tinggiPrisma);

    
    cout << "Volume prisma adalah: " << volumePrisma << endl;

    return 0;
}