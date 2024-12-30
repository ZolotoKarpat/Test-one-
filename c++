#include <iostream>

int main() {
    int number;

    // Запрашиваем число у пользователя
    std::cout << "Введите целое число: ";
    std::cin >> number;

    // Проверяем, чётное или нечётное
    if (number % 2 == 0) {
        std::cout << "Число " << number << " является чётным.\n";
    } else {
        std::cout << "Число " << number << " является нечётным.\n";
    }

    return 0;
}
