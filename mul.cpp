#include <iostream>
#include <cstdlib>

int main() {

    int num1, num2;
    std::cout << "请输入两个整数: ";
    std::cin >> num1 >> num2;

    int product = num1 * num2;
    std::cout << num1 << " * " << num2 << " = " << product << std::endl;

    return 0;
}
