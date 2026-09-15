#include <iostream>
#include <cmath>

int main() {
    float a, b;
    std::cin >> a >> b;

    float diff = std::pow(a - b, 2);
    float poly = std::pow(a, 2) - 2 * a * b;
    float res = (diff - poly) / std::pow(b, 2);

    std::cout << "float: " << res << std::endl;
    return 0;
}