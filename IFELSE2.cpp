#include <iostream>
#include <string>
#include <iomanip>

enum Banknote { N20 = 20, N50 = 50, N100 = 100, N200 = 200, N500 = 500, N1000 = 1000 };

int main() {
    std::cout << "Завдання 1" << std::endl;
    int colorCode;
    std::cout << "Виберіть колір(1-червоний, 2-зелений, 3-синій): ";
    std::cin >> colorCode;
    switch (colorCode) {
    case 1: system("color 0C"); break;
    case 2: system("color 0A"); break;
    case 3: system("color 0B"); break;
    default: system("color 07"); break;
    }
    std::cout << "Текст змінив колір" << std::endl;

    
    std::cout << "\nЗавдання 2" << std::endl;
    int val;
    std::cout << "Введіть номінал банкноти: ";
    std::cin >> val;
    switch (val) {
    case N20: std::cout << "На банкноті 20 зображено Івана Франка" << std::endl; break;
    case N50: std::cout << "На банкноті 50 зображено Михайла Грушевського" << std::endl; break;
    case N100: std::cout << "На банкноті 100 зображено Тараса Шевченка" << std::endl; break;
    case N200: std::cout << "На банкноті 200 зображено Лесю Українку" << std::endl; break;
    case N500: std::cout << "На банкноті 500 зображено Григорія Сковороду" << std::endl; break;
    case N1000: std::cout << "На банкноті 1000 зображено Володимира Вернадського" << std::endl; break;
    default: std::cout << "Такої банкноти не існує" << std::endl;
    }

    
    std::cout << "\nЗавдання 3" << std::endl;

    double s1, s2, s3;
    std::cout << "Введіть продажі для 3 менеджерів: ";
    std::cin >> s1 >> s2 >> s3;

    double sal1, sal2, sal3;

    if (s1 < 500) sal1 = 200 + s1 * 0.03;
    else if (s1 <= 1000) sal1 = 200 + s1 * 0.05;
    else sal1 = 200 + s1 * 0.08;

    if (s2 < 500) sal2 = 200 + s2 * 0.03;
    else if (s2 <= 1000) sal2 = 200 + s2 * 0.05;
    else sal2 = 200 + s2 * 0.08;

    if (s3 < 500) sal3 = 200 + s3 * 0.03;
    else if (s3 <= 1000) sal3 = 200 + s3 * 0.05;
    else sal3 = 200 + s3 * 0.08;

    double maxSal = (sal1 > sal2 && sal1 > sal3) ? sal1 : ((sal2 > sal3) ? sal2 : sal3);

    std::cout << "Зарплати: " << sal1 << ", " << sal2 << ", " << sal3 << std::endl;
    std::cout << "Найкращий менеджер отримав: " << maxSal + 200 << " (з премією)" << std::endl;

    return 0;
}