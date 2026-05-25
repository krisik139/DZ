#include <iostream>

int main() {

    // частина 1

    std::cout << "перше завдання\n";

    int total_seconds, hours, minutes, seconds;
    std::cin >> total_seconds;
    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;
    std::cout << hours << " год " << minutes << " хв " << seconds << " сек" << std::endl;

    std::cout << "друге завдання\n";
    
    double input;
    std::cin >> input;
    int hryvnias = input;
    int kopiykas = round((input - hryvnias) * 100);
    std::cout << hryvnias << " грн. " << kopiykas << " коп." << std::endl;
    
    std::cout << "третє завдання\n";

    double distance, time_input;
    std::cout << "Обчислення швидкості бігу." << std::endl;
    std::cout << "Введіть довжину дистанції (метрів) = ";
    std::cin >> distance;
    std::cout << "Введіть час (хв.сек) = ";
    std::cin >> time_input;

    int _minutes = time_input;
    int _seconds = (time_input - minutes) * 100 + 0.5;
    int _total_seconds = minutes * 60 + seconds;

    double speed_mps = distance / _total_seconds;
    double speed_kph = speed_mps * 3.6;

    std::cout << "Дистанція: " << distance << " м." << std::endl;
    std::cout << "Час: " << minutes << " хв " << seconds << " сек = " << _total_seconds << " сек." << std::endl;
    std::cout << "Ви бігли зі швидкістю " << speed_kph << " км/год." << std::endl;

    std::cout << "четверте завдання\n";

    int total_days, weeks, days;
    std::cin >> total_days;
    weeks = total_days / 7;
    days = total_days % 7;
    std::cout << weeks << " тижні " << days << " дні" << std::endl;

    // частина 2

    std::cout << "\t\"Заповіт\"\n\tТарас Шевченко\n\n";
    std::cout << "Як умру, то поховайте\n";
    std::cout << "Мене на могилі\n";
    std::cout << "Серед степів широких\n";
    std::cout << "та вкраїні милій.\nзавдання2\n";

    std::cout << "Every hunter wants to know:\n";
    std::cout << "\tred\n";
    std::cout << "\t\torange\n";
    std::cout << "\t\t\tyellow\n";
    std::cout << "\t\t\t\tgreen\n";
    std::cout << "\t\t\t\t\tblue\n";
    std::cout << "\t\t\t\t\t\tindigo\n";
    std::cout << "\t\t\t\t\t\t\tviolet\nзавдання 3\n";
    
    std::cout << "----------------------------" << std::endl;
    std::cout << "    ПРОДАМ ВЕЛОСИПЕД        " << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << "Модель: Trek Marlin 7      " << std::endl;
    std::cout << "Стан: Ідеальний            " << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << "Ціна: 15 000 грн           " << std::endl;
    std::cout << "Тел.: 096-756-32-05        " << std::endl;
    std::cout << "----------------------------" << std::endl;

    return 0;
}