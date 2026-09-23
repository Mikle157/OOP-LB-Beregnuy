#include <iostream>
#include <cmath>
#include <iomanip>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    double a, b, h;
    cout << "a b h: ";
    cin >> a >> b >> h;

    cout << "  x   |    Y   \n------|--------\n";
    for (double x = a; x <= b + 1e-9; x += h) {
        double y = sin(sqrt(x)) + exp(x) - 3;
        cout << fixed << setprecision(2) << setw(5) << x
             << " | " << setprecision(4) << setw(7) << y << endl;
    }
    return 0;
}