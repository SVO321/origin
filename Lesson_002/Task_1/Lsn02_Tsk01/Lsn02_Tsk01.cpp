#include <iostream>
#include <windows.h>

enum class months
{
    ByBy = 0,
    January = 1,
    February = 2,
    March = 3,
    April = 4,
    May = 5,
    June = 6,
    July = 7,
    August = 8,
    September = 9,
    October = 10,
    November = 11,
    December = 12
};

int main(int argc, char** argv)
{
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    int input; bool checked;
    do {
        checked = false;
        std::cout << "Введите номер месяца: ";
        std::cin >> input;
        switch (input)
        {
        case static_cast<int>(months::January):
            std::cout << "Январь\n";
            checked = true;
            break;
        case static_cast<int>(months::February):
            std::cout << "Февраль\n";
            checked = true;
            break;
        case static_cast<int>(months::March):
            std::cout << "Март\n";
            checked = true;
            break;
        case static_cast<int>(months::April):
            std::cout << "Апрель\n";
            checked = true;
            break;
        case static_cast<int>(months::May):
            std::cout << "Май\n";
            checked = true;
            break;
        case static_cast<int>(months::June):
            std::cout << "Июнь\n";
            checked = true;
            break;
        case static_cast<int>(months::July):
            std::cout << "Июль\n";
            checked = true;
            break;
        case static_cast<int>(months::August):
            std::cout << "Август\n";
            checked = true;
            break;
        case static_cast<int>(months::September):
            std::cout << "Сентябрь\n";
            checked = true;
            break;
        case static_cast<int>(months::October):
            std::cout << "Октябрь\n";
            checked = true;
            break;
        case static_cast<int>(months::November):
            std::cout << "Ноябрь\n";
            checked = true;
            break;
        case static_cast<int>(months::December):
            std::cout << "Декабрь\n";
            checked = true;
            break;
        case static_cast<int>(months::ByBy):
            std::cout << "До свидания :(\n";
            Sleep(2000); break;
        default:
            std::cout << "Неправильный номер!\n";
            checked = true;
            break;
        }
    } while (checked);
    return 0;
}