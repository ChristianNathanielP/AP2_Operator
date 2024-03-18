#include <iostream>
using namespace std;

int main(){
    int tinggi_kerucut, jari_jari_kerucut, luas_alas_limas, tinggi_limas, jari_jari_bola, alas_prisma,tinggi_prisma;
    float phi,volume_kerucut, volume_limas, volume_bola, volume_prisma;
    phi : 3.14;
    cout << "masukan tinggi kerucut:"<<endl;
    cin >>tinggi_kerucut;
    cout << "masukan jari jari kerucut:"<<endl;
    cin >> jari_jari_kerucut;
    cout << "masukan luas alas limas:"<<endl;
    cin >> luas_alas_limas;
    cout << "masukan tinggi limas:"<<endl;
    cin >> tinggi_limas;
    cout << "masukan jari jari bola:"<<endl;
    cin >> jari_jari_bola;
    cout << "masukan alas prisma:"<<endl;
    cin >> alas_prisma;
    cout << "masukan tinggi prisma:"<<endl;
    cin >> tinggi_prisma;

    volume_kerucut : phi * jari_jari_kerucut * jari_jari_kerucut * tinggi_kerucut / 3;
    volume_limas : luas_alas_limas * tinggi_limas / 3;
    volume_bola : 4/3 * phi * jari_jari_bola * jari_jari_bola * jari_jari_bola;
    volume_prisma : alas_prisma*tinggi_prisma;

    cout << "volume kerucut:" << volume_kerucut<<endl;
    cout << "volume limas:" << volume_limas<<endl;
    cout << "volume bola:" << volume_bola<<endl;
    cout << "volume prisma:" << volume_prisma<<endl;
}