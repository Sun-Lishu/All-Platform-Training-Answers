#include <iostream>
#include <string>
#include <cstdlib> // for std::strtol

int main() {
    std::string hex_number;
    std::cin >> hex_number;

    // Convert the hexadecimal number to a decimal integer
    long decimal_number = std::strtol(hex_number.c_str(), nullptr, 16);

    // Print the decimal integer
    std::cout << decimal_number << std::endl;

    return 0;
}
