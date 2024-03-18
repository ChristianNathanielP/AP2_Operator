#include <iostream>
using namespace std;

int main()
{
    system ("CLS");
    //Kerucut
    int r,t; 
    float volker;

    cout << "-- MENGHITUNG VOLUME KERUCUT --" << endl;
    cout << "Masukkan jari-jari kerucut: ";
    cin >> r;

    cout << "Masukkan tinggi kerucut: ";
    cin >> t;

    volker = (1.0 / 3.0) * (22.0 / 7.0) * r * r * t;
    cout << "Volume Kerucut adalah " << volker << endl;
    cout << endl;

    //Limas Segitiga
    int s, tinggi;
    double hasil; 

    cout << "-- MENGHITUNG VOLUME LIMAS SEGITIGA --" << endl;
    cout << "Masukkan sisi alas: ";
    cin >> s;

    cout << "Masukkan tinggi Limas: ";
    cin >> tinggi;

    hasil = (1.0 / 3.0) * s * s * tinggi;

    cout << "Volume Limas Segitiga adalah " << hasil << endl;
    cout << endl;

    //Bola
    int jari_jari;
    float volb;

    cout << "-- MENGHITUNG VOLUME BOLA --" << endl;
    cout << "Masukkan jari-jari: ";
    cin >> jari_jari;

    volb = (4.0 / 3.0) * (22.0 / 7.0) * jari_jari * jari_jari * jari_jari;
    cout <<"Volume Bola adalah " << volb << endl;
    cout << endl;

    //Prisma
    int alas,tinggiprisma, tinggisegitiga;
    float volpris;

    cout << "-- MENGHITUNG VOLUME PRISMA --" << endl;
    cout<< "Masukkan alas segitiga: ";
    cin >> alas;

    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggisegitiga;

    cout << "Masukkan tinggi prisma: ";
    cin >> tinggiprisma;

    volpris = ((alas * tinggisegitiga)/2) * tinggiprisma;
    cout << "Volume Prisma adalah " << volpris <<endl;

    return 0;
}