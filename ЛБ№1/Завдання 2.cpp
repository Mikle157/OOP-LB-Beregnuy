#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    int res = ++n * ++m;

    std::cout << "res=" << res << ", n=" << n << ", m=" << m << std::endl;
    return 0;
}