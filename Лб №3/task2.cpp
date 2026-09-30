#include <iostream>
#include <windows.h>

using namespace std;

int main() {

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    double a;
    int n;
    cout << "Введіть a та n: ";
    cin >> a >> n;

    double y = 0, pow_a = 1;
    for (int i = 1; i <= n; ++i) {
        pow_a *= a;
        y += (i + 2) / pow_a;
    }

    cout << "y = " << y << endl;
    return 0;
}