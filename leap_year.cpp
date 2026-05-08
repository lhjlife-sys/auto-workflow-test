#include <iostream>
#include <cstdlib>

int main() {

    int year;
    std::cout << "请输入一个年份: ";
    std::cin >> year;

    bool isLeap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);

    if (isLeap) {
        std::cout << year << " 是闰年" << std::endl;
    } else {
        std::cout << year << " 不是闰年" << std::endl;
    }

    return 0;
}
