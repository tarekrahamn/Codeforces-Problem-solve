#include <iostream>

int main() {
    int n;
    std::cout << "Enter an odd number: ";
    std::cin >> n;

    if (n % 2 == 1) {
        // Upper part of the pattern
        for (int i = 1; i <= n / 2 + 1; i++) {
            for (int j = 1; j <= n - i; j++) {
                std::cout << " ";
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
                std::cout << "*";
            }
            std::cout << std::endl;
        }

        // Middle part of the pattern
        for (int i = 1; i <= n / 2; i++) {
            for (int j = 1; j <= n - 1; j++) {
                if (j == n / 2 + 1) {
                    std::cout << "*";
                } else {
                    std::cout << " ";
                }
            }
            std::cout << std::endl;
        }

        // Lower part of the pattern
        for (int i = 1; i <= n / 2; i++) {
            for (int j = 1; j <= n - i; j++) {
                std::cout << " ";
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
                std::cout << "*";
            }
            std::cout << std::endl;
        }
    } else {
        std::cout << "Invalid input. Please enter an odd number." << std::endl;
    }

    return 0;
}
