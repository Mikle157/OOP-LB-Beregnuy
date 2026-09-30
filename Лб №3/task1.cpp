#include <iostream>
#include <algorithm>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;
    cout << "Введіть n: ";
    cin >> n;

    int start = max(100, n);
    for (int i = start; i <= 800; ++i) {
        if (i % 48 == 0) {
            cout << i << " ";
        }
    }
    return 0;
}