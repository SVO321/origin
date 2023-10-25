#include <iostream>
#include <windows.h>
#include <cstdlib>


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
    system("chcp 1251>null");
    int input; bool checked;
    do {
        checked = false;
        std::cout << "Введите номер месяца: ";
        std::cin >> input;
        switch (input)
        {
        case static_cast<int>(months::January):
            std::cout << "ßíâàðü\n";
            checked = true;
            break;
        case static_cast<int>(months::February):
            std::cout << "Ôåâðàëü\n";
            checked = true;
            break;
        case static_cast<int>(months::March):
            std::cout << "Ìàðò\n";
            checked = true;
            break;
        case static_cast<int>(months::April):
            std::cout << "Àïðåëü\n";
            checked = true;
            break;
        case static_cast<int>(months::May):
            std::cout << "Ìàé\n";
            checked = true;
            break;
        case static_cast<int>(months::June):
            std::cout << "Èþíü\n";
            checked = true;
            break;
        case static_cast<int>(months::July):
            std::cout << "Èþëü\n";
            checked = true;
            break;
        case static_cast<int>(months::August):
            std::cout << "Àâãóñò\n";
            checked = true;
            break;
        case static_cast<int>(months::September):
            std::cout << "Ñåíòÿáðü\n";
            checked = true;
            break;
        case static_cast<int>(months::October):
            std::cout << "Îêòÿáðü\n";
            checked = true;
            break;
        case static_cast<int>(months::November):
            std::cout << "Íîÿáðü\n";
            checked = true;
            break;
        case static_cast<int>(months::December):
            std::cout << "Äåêàáðü\n";
            checked = true;
            break;
        case static_cast<int>(months::ByBy):
            std::cout << "Äî ñâèäàíèÿ :(\n";
            Sleep(2000); break;
        default:
            std::cout << "Íåïðàâèëüíûé íîìåð!\n";
            checked = true;
            break;
        }
    } while (checked);
    system("pause>null");
    return 0;
}