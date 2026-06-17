#include <iostream>

int main() {
    int num = 0;
    int reversed = 0;
    std::cout << "Введіть число: ";
    std::cin >> num;

    while (num != 0) {
        reversed = reversed * 10 + (num % 10); // формула щоб отримати останню цифру числа
        num /= 10;
    }

    std::cout << "Перевернуте число: " << reversed << std::endl;

    // Завдання 2

    num = 0;
    int maxDigit = 0;
    std::cout << "Введіть число: ";
    std::cin >> num;

    while (num > 0) {
        int currentDigit = num % 10; // отримуємо останню цифру
        if (currentDigit > maxDigit) {
            maxDigit = currentDigit;
        }
        num /= 10;
    }

    std::cout << "Найбільша цифра: " << maxDigit << std::endl;
    return 0;
    return 0;
}