#include <iostream>

int main() {

    // завдання 1

    int n;
    std::cin >> n;
    if (n < 100000 || n > 999999) {
        std::cout << "Помилка: число не шестизначне" << std::endl;
    }
    else {
        int d1 = n / 100000;
        int d2 = (n / 10000) % 10;
        int d3 = (n / 1000) % 10;
        int d4 = (n / 100) % 10;
        int d5 = (n / 10) % 10;
        int d6 = n % 10;
        if ((d1 + d2 + d3) == (d4 + d5 + d6)) std::cout << "Щасливе" << std::endl;
        else std::cout << "Нещасливе" << std::endl;
    }

    // завдання 2

    int _n;
    std::cin >> _n;
    if (_n < 1000 || _n > 9999) {
        std::cout << "Помилка: число не чотиризначне" << std::endl;
    }
    else {
        int d1 = _n / 1000;
        int d2 = (_n / 100) % 10;
        int d3 = (_n / 10) % 10;
        int d4 = _n % 10;
        std::cout << d2 << d1 << d4 << d3 << std::endl;
    }

    // завдання 3

    int max_val, current;
    std::cin >> max_val;
    for (int i = 0; i < 6; ++i) {
        std::cin >> current;
        if (current > max_val) max_val = current;
    }
    std::cout << max_val << std::endl;

    // задвання 4

    double distAB, distBC, weight;
    std::cin >> distAB >> distBC >> weight;
    double consumption;
    if (weight <= 500) consumption = 1;
    else if (weight <= 1000) consumption = 4;
    else if (weight <= 1500) consumption = 7;
    else if (weight <= 2000) consumption = 9;
    else {
        std::cout << "Літак не підніме таку вагу" << std::endl;
        return 0;
    }
    double fuelNeededAB = distAB * consumption;
    double fuelNeededBC = distBC * consumption;
    if (fuelNeededAB > 300) std::cout << "Неможливо долетіти з A до B" << std::endl;
    else {
        double fuelAtB = 300 - fuelNeededAB;
        if (fuelNeededBC <= fuelAtB) std::cout << "Дозаправка не потрібна" << std::endl;
        else std::cout << "Потрібно заправити: " << fuelNeededBC - fuelAtB << " літрів" << std::endl;
    }
    return 0;
}