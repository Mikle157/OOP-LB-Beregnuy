#include <iostream>
#include <cmath>

int main() {
    double a, b;
    std::cin >> a >> b;

    double diff = std::pow(a - b, 2);
    double poly = std::pow(a, 2) - 2 * a * b;
    double res = (diff - poly) / std::pow(b, 2);

    std::cout << "double: " << res << std::endl;
    return 0;
}