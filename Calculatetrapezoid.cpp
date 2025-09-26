#include <iostream>
using namespace std;

int main() {
    double a, b, t;
    cout << "Panjang sisi sejajar atas (a): ";
    cin >> a;
    cout << "Panjang sisi sejajar bawah (b): ";
    cin >> b;
    cout << "Tinggi (t): ";
    cin >> t;

    double luas = 0.5 * (a + b) * t;
    cout << "Luas trapesium = " << luas << endl;
    return 0;
}
