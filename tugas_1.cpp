#include <iostream>
using namespace std;

int main()
{
    double radius, height;
    cout << "Masukkan jari - jari kerucut: ";
    cin >> radius;
    cout << "Masukkan tinggi kerucut: ";
    cin >> height;
    
    double volume = (1.0 / 3) * (22.0 / 7) * radius * radius * height;
    cout << "Volume kerucut adalah: " << volume << endl;
    return 0;
}