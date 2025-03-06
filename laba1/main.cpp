#include <iostream>
#include <cmath>

using namespace std;

double Perimeter(double lenght, double widht) {
    return (lenght + widht) * 2;
}

double Square(double lenght, double widht) {
    return lenght * widht ;
}

double Diagonal(double light, double widht) {
    return sqrt (pow (light, 2) + pow (widht, 2));
}

int main() {
    double lenght = 5.5;
    double widht = 3.0;
    cout << "Длина прмоугольника: " << lenght << endl;
    cout << "Ширина прямоугольника: " << widht << endl;
    cout << "Периметр = " << Perimeter(lenght, widht ) << endl;
    cout << "Пощадь = " << Square(lenght, widht) << endl;
    cout << "Длина диагонали = " << Diagonal (lenght, widht) << endl;
    return 0;
    
}
