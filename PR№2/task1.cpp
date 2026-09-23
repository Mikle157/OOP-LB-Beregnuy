#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    int A;
    cout << "A: ";
    cin >> A;

    cout << boolalpha << ((A >= 0) || (A % 2 != 0)) << endl;
    return 0;
}