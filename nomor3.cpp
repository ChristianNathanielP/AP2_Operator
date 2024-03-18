#include <iostream>
using namespace std;

main()
{
    system ("cls");
    float pi;
    pi = 3.14;
    int jk, tk, las, tas, jb, lap, tp;
    jk = 7;
    tk = 12;
    las = 5;
    tas = 12;
    jb = 7;
    lap = 10;
    tp = 15;
    float kerucut, limassegitiga, bola, prisma;

    cout << "volume kerucut : " << endl;
    kerucut = 1/3 * pi * (jk*jk) * tk;
    cout << " 1/3 " << " x " << pi << " x " << " 49 " << " x " << tk << " = " << kerucut << endl; 
    
    cout << "volume limas segitiga : " << endl;
    limassegitiga = 1/3 * las * tas;
    cout << " 1/3 " << " x " << las << " x " << tas << " = " << limassegitiga << endl;

    cout << "volume bola : " << endl;
    bola = 4/3 * pi * (jb*jb*jb);
    cout << " 4/3 " << " x " << pi << " x " << " 134 " << " = " << bola << endl;

    cout << "volume prisma : " << endl;
    prisma = lap * tp;
    cout << lap << " x " << tp << " = " << prisma << endl;

}