//Catalan Numbers
#include <iostream>
#include <vector>

// Write your functions here
std::vector<long long> catalan_numbers(int n) {
    std::vector<long long> c;
    if (n <= 0) return c;
    c.push_back(1);                     // C0
    if (n == 1) return c;
    c.push_back(1);                     // C1

    for (int i = 2; i < n; ++i) {
        long long ci = 0;
        for (int j = 0; j < i; ++j) {
            ci += c[j] * c[i - 1 - j];
        }
        c.push_back(ci);
    }
    return c;
}

int main() {
    int n;

    std::cout << "Enter n: ";
    std::cin >> n;

    std::vector<long long> numbers = catalan_numbers(n);

    for (int i = 0; i < numbers.size(); i++) {
        std::cout << "C" << i << " = " << numbers[i] << std::endl;
    }

    return 0;
}