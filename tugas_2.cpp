#include <iostream>
using namespace std;


double hitungVolumeLimasSegitiga(double alas, double tinggiSegitiga, double tinggiLimas) {
    double luasAlas = 0.5 * alas * tinggiSegitiga;
    double volume = (luasAlas * tinggiLimas) / 3;
    return volume;
}

int main() {
    double alasSegitiga, tinggiSegitiga, tinggiLimas;

    
    cout << "Masukkan panjang alas segitiga: ";
    cin >> alasSegitiga;
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggiSegitiga;
    cout << "Masukkan tinggi limas: ";
    cin >> tinggiLimas;

    
    double volumeLimas = hitungVolumeLimasSegitiga(alasSegitiga, tinggiSegitiga, tinggiLimas);

    
    cout << "Volume limas segitiga adalah: " << volumeLimas << endl;

    return 0;
}