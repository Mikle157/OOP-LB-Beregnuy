#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    int A, B;
    cout << "A B: ";
    cin >> A >> B;

    for (int i = A; i <= B; ++i) {
        if (i % 2 != 0) cout << i << " ";
    }
    cout << endl;
    return 0;
}