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
        std::cout << "������� ����� ������: ";
        std::cin >> input;
        switch (input)
        {
        case static_cast<int>(months::January):
            std::cout << "������\n";
            checked = true;
            break;
        case static_cast<int>(months::February):
            std::cout << "�������\n";
            checked = true;
            break;
        case static_cast<int>(months::March):
            std::cout << "����\n";
            checked = true;
            break;
        case static_cast<int>(months::April):
            std::cout << "������\n";
            checked = true;
            break;
        case static_cast<int>(months::May):
            std::cout << "���\n";
            checked = true;
            break;
        case static_cast<int>(months::June):
            std::cout << "����\n";
            checked = true;
            break;
        case static_cast<int>(months::July):
            std::cout << "����\n";
            checked = true;
            break;
        case static_cast<int>(months::August):
            std::cout << "������\n";
            checked = true;
            break;
        case static_cast<int>(months::September):
            std::cout << "��������\n";
            checked = true;
            break;
        case static_cast<int>(months::October):
            std::cout << "�������\n";
            checked = true;
            break;
        case static_cast<int>(months::November):
            std::cout << "������\n";
            checked = true;
            break;
        case static_cast<int>(months::December):
            std::cout << "�������\n";
            checked = true;
            break;
        case static_cast<int>(months::ByBy):
            std::cout << "�� �������� :(\n";
            Sleep(2000); break;
        default:
            std::cout << "������������ �����!\n";
            checked = true;
            break;
        }
    } while (checked);
    return 0;
}