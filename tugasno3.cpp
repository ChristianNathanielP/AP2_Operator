#include <iostream>
using namespace std;

//#define pi 3.14;
main(){
    system("cls");
    int tkerucut, rkerucut,
    tlimas, tsegitiga_limas, asegitiga_limas,
    rbola,
    lprisma,tprisma;
    float volume,pi=3.14;
    //Kerucut
    cout<<"Jari-jari lingkaran kerucut : "; cin>>rkerucut;
    cout<<"Tinggi kerucut : "; cin>>tkerucut;
    volume = (1.00/3)* pi * rkerucut*rkerucut*tkerucut;
    cout<<"Volume kerucut : "<<volume<<endl;

    //Limas Segitiga
    cout<<"Alas segitiga limas : "; cin>>asegitiga_limas;
    cout<<"Tinggi segitiga limas : "; cin>>tsegitiga_limas;
    cout<<"Tinggi limas : "; cin>>tlimas;
    volume = (1.00/3)*((1.00/2)*asegitiga_limas*tsegitiga_limas)*tlimas;
    cout<<"Volume limas : "<<volume<<endl;
    //Bola
    cout<<"Jari-jari bola : "; cin>>rbola;
    volume = (4.00/3)*pi* rbola*rbola*rbola;
    cout<<"Volume Bola : "<<volume<<endl;
    //Prisma
    cout<<"Luas alas prisma : "; cin>>lprisma;
    cout<<"Tinggi prisma : "; cin>>tprisma;
    volume = lprisma*tprisma;
    cout<<"Volume Prisma : "<<volume<<endl;

    
}