#include <iostream>
#include <cmath>
#include <iostream>
#include <windows.h>

using namespace std;

int main() {

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int s = 65;

    for (int c20 = 0; c20 * 20 <= s; ++c20) {
        for (int c10 = 0; c20 * 20 + c10 * 10 <= s; ++c10) {
            int rem = s - (c20 * 20 + c10 * 10);
            if (rem % 5 == 0) {
                cout << "20 грн: " << c20
                     << " | 10 грн: " << c10
                     << " | 5 грн: " << rem / 5 << endl;
            }
        }
    }
    return 0;
}