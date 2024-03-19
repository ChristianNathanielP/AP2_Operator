#include <iostream>
using namespace std;

const double PI = 3.14159265358979323846; 
double hitungVolumeBola(double radius) {
    double volume = (4.0 / 3.0) * PI * radius * radius * radius;
    return volume;
}

int main() {
    double radius;

    
    cout << "Masukkan jari-jari bola: ";
    cin >> radius;

   
    if (radius < 0) {
        cout << "Jari-jari tidak boleh negatif." << endl;
        return 1; 
    }

   
    double volumeBola = hitungVolumeBola(radius);

    
    cout << "Volume bola adalah: " << volumeBola << endl;

    return 0;
}