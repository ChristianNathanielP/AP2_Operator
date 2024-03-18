#include <iostream>
using namespace std;

int main() {
    system("CLS");
    float Kerucut, LimasSegitiga, Bola, Prisma;
    float r, t, LuasAlas, TinggiLimas, TinggiPrisma;
    char BangunRuang;

    cout << "Program Menghitung Volume Bangun Ruang" << endl;
    cout << "======================================" << endl;
    cout << "a. Kerucut" << endl;
    cout << "b. Limas Segitiga" <<endl;
    cout << "c. Bola" << endl;
    cout << "d. Prisma"<< endl;
    puts("");
    cout << "Masukkan Kode Bangun Ruang (a/b/c/d) : "; cin >> BangunRuang;

    system("CLS");

    if (BangunRuang == 'a') {
        cout << "Kerucut" << endl;
        cout << "Jari-jari      : "; cin >> r;
        cout << "Tinggi         : "; cin >> t;
        Kerucut = (3.14 * r * r * t) / 3;
        cout << "Volume Kerucut : " << Kerucut;
    }
        else if (BangunRuang == 'b') {
            cout << "Limas Segitiga" <<endl;
            cout << "Luas Alas              : "; cin >> LuasAlas;
            cout << "Tinggi Limas           : "; cin >> TinggiLimas;
            LimasSegitiga = (LuasAlas * TinggiLimas) / 3;
            cout << "Volume Limas Segitiga  : " << LimasSegitiga;
        }
            else if (BangunRuang == 'c') {
                cout << "Bola" << endl;
                cout << "Jari-jari      : "; cin >> r;
                Bola = (4 * 3.14 * r * r * r) / 3;
                cout << "Volume Bola    : " << Bola;
            }
                else if (BangunRuang == 'd') {
                    cout << "Prisma"<< endl;
                    cout << "Luas Alas      : "; cin >> LuasAlas;
                    cout << "Tinggi Prisma  : "; cin >> TinggiPrisma;
                    Prisma = LuasAlas * TinggiPrisma;
                    cout << "Volume Prisma  : " << Prisma;
                }    
}