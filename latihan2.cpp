#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    system("CLS");

    int r, t, as, ts;
    float al, kerucut, limas, bola, prisma, lps;

    cout << "Masukkan jari-jari : "; 
    cin >> r;
    cout << "Masukkan tinggi : "; 
    cin >> t;
    cout << "Masukkan alas segitiga : "; 
    cin >> as; 
    cout << "Masukkan tinggi segitiga : "; 
    cin >> ts;

    al = (r * r) * 3.14;
    lps = (as * ts) / 2.0; 

    kerucut = al * t / 3.0; 
    limas = lps * t / 3.0;
    bola = (4.0 / 3.0) * 3.14 * (r * r * r);
    prisma = lps * t;

    cout << fixed << setprecision(2); 

    cout << "V Kerucut : " << kerucut << endl;
    cout << "V Limas : " << limas << endl;
    cout << "V Bola : " << bola << endl;
    cout << "V Prisma : " << prisma << endl;

    return 0;
}
