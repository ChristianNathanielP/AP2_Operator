#include <iostream>
#include <math.h>
using namespace std;

main()
{
    system("CLS");
    //A
        int rk, tk;
        const float phi=3.14;
        float hasil;
        cout<<"masukkan jari jari kerucut : "; cin>>rk;
        cout<<"masukkan tinggi kerucut : "; cin>> tk;
        hasil = (phi * rk * rk * tk)/3;
        cout<<"volume kerucut : "<<hasil<<endl;
        system("pause");

    system("CLS");

    //B
        int la,tl;
        cout<<"masukkan luas alas limas: "; cin>>la;
        cout<<"masukkan tinggi limas: "; cin>>tl;
        hasil = (la*tl)/3;
        cout<<"volume limas segitiga : "<<hasil<<endl;
        system("pause");

    system("CLS");

    //c
        int rb;
        cout<<"masukkan jari jari bola: "; cin>>rb;
        hasil = (4*phi*rb*rb*rb)/3;
        cout<<"volume bola : "<<hasil<<endl;
        system("pause");

    system("CLS");
    
    //d
        int as,ts,tp;
        cout<<"masukkan alas segitiga: "; cin>>as;
        cout<<"masukkan tinggi segitiga: "; cin>>ts;
        cout<<"masukkan tinggi prisma: "; cin>>tp;
        hasil = ((as*ts)/2)*tp;
        cout<<"volume prisma: "<<hasil<<endl;
        system("pause");

}