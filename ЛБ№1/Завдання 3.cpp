#include <iostream>
#include <cmath>

int main() {
    double a, b;
    std::cin >> a >> b;

    if (a <= 0 || b <= 0 || 2 * a <= b) {
        std::cout << "Error" << std::endl;
        return 1;
    }

    double h = std::sqrt(4 * a * a - b * b) / 2.0;
    double R = (a * a) / (2.0 * h);

    std::cout << "R = " << R << std::endl;
    return 0;
}