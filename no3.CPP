#include <iostream>
#include <cmath>

using namespace std;

// rumus kerucut
double volumeKerucut(double r, double t) {
    return (1.0/3.0) * M_PI * pow(r, 2) * t;
}

// rumus segitiga limas
double volumeLimasSegitiga(double alas, double tinggi) {
    return (1.0/3.0) * alas * tinggi;
}

// rumus bola
double volumeBola(double r) {
    return (4.0/3.0) * M_PI * pow(r, 3);
}

// rumus prisma
double volumePrisma(double alas, double tinggi) {
    return alas * tinggi;
}

int main() {
    system("cls");
    char pilihan;
    double r, t, alas, tinggi;

    cout << "Program Menghitung Volume Bangun Ruang" << endl;
    cout << "a. Kerucut" << endl;
    cout << "b. Limas Segitiga" << endl;
    cout << "c. Bola" << endl;
    cout << "d. Prisma" << endl;
    cout << "Masukkan pilihan Anda (a/b/c/d): ";
    cin >> pilihan;

    switch (pilihan) {
        case 'a':
            cout << "Masukkan jari-jari kerucut: ";
            cin >> r;
            cout << "Masukkan tinggi kerucut: ";
            cin >> t;
            cout << "Volume kerucut adalah: " << volumeKerucut(r, t) << endl;
            break;
        case 'b':
            cout << "Masukkan alas limas segitiga: ";
            cin >> alas;
            cout << "Masukkan tinggi limas segitiga: ";
            cin >> tinggi;
            cout << "Volume limas segitiga adalah: " << volumeLimasSegitiga(alas, tinggi) << endl;
            break;
        case 'c':
            cout << "Masukkan jari-jari bola: ";
            cin >> r;
            cout << "Volume bola adalah: " << volumeBola(r) << endl;
            break;
        case 'd':
            cout << "Masukkan alas prisma: ";
            cin >> alas;
            cout << "Masukkan tinggi prisma: ";
            cin >> tinggi;
            cout << "Volume prisma adalah: " << volumePrisma(alas, tinggi) << endl;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
            break;
    }

    return 0;
}
