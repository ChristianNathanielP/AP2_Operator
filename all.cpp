#include <iostream>
using namespace std;
main ()
{
    system("CLS");
    cout<<"===Program Menghitung Volume Bangun Ruang===\n";
    cout<<"a. Kerucut\n";
    cout<<"b. Limas Segitiga\n";
    cout<<"c. Bola\n";
    cout<<"d. Prisma\n";
    string BR;
    cout<<"Pilih Kode Bangun Ruang (a/b/c/d) "; cin>>BR;

    if (BR=="a") {
        system("CLS");
        cout<<"-------Program Menghitung Volume Kerucut-------\n";
        float v, r, t;
        cout<<"Masukkan nilai jari-jari : "; cin>>r;
        cout<<"Masukkan nilai tinggi    : "; cin>>t;
        v = (3.14 * r * r * t)/3;
        cout<<"Volume segitiga adalah "<<v<<endl;
        }
            else if (BR=="b") {
                system("CLS");
                cout<<"-----Program Menghitung Volume Limas Segitiga-----\n";
                float la, tl, v;
                cout<<"Masukkan nilai luas alas       : "; cin>>la;
                cout<<"Masukkan nilai tinggi prisma   : "; cin>>tl;
                v = (la * tl)/3;
                cout<<"Volume Limas Segitiga adalah "<<v<<endl;
            }
                else if (BR=="c") {
                    system("CLS");
                    cout<<"-----Program Menghitung Volume Bola-----\n";
                    float r, v;
                    cout<<"Masukkan nilai jari-jari   : "; cin>>r;
                    v = (4 * 3.14 * r * r * r)/3;
                    cout<<"Volume Bola adalah "<<v<<endl;
                }
                    else if (BR=="d") {
                        system("CLS");
                        cout<<"-----Program Menghitung Volume Prisma-----\n";
                        float la, T, v;
                        cout<<"Masukkan nilai luas alas     : "; cin>>la;
                        cout<<"Masukkan nilai tinggi prisma : "; cin>>T;
                        v = la * T;
                        cout<<"Volume Prisma adalah "<<v<<endl;
                    }
                        else {
                            system("CLS");
                            cout<<"Kode yang anda pilih tidak ada\n";
                        }
}