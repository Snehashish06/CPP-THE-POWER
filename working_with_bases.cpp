#include <iostream>


int main() {
    int num1 = 15; // decimal
    int num2 = 017; // octal
    int num3 = 0x0f; //hexadecimal
    int num4 = 0b00001111; // binary
    std::cout << "Number 1: " << num1 << std::endl;
    std::cout << "Number 2: " << num2 << std::endl;
    std::cout << "Number 3: " << num3 << std::endl;
    std::cout << "Number 4: " << num4 << std::endl;
    return 0;
}