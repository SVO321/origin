#include <iostream>
#include <windows.h>

struct bank_data
{
    int account_number;
    std::string owner_name;
    float account_balance;
};

void new_balance_change(bank_data* b_info, float new_balance)
{
    b_info->account_balance = new_balance;
}

int main(int argc, char** argv)
{
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    float new_balance; bank_data b_info;
    std::cout << "������� ����� �����: ";
    std::cin >> b_info.account_number;
    std::cout << "������� ��� ���������: ";
    std::cin >> b_info.owner_name;
    std::cout << "������� ������: ";
    std::cin >> b_info.account_balance;
    std::cout << "������� ����� ������: ";
    std::cin >> new_balance;
    new_balance_change(&b_info, new_balance);
    std::cout << "��� ����: " << b_info.owner_name << ", " << b_info.account_number << ", " << b_info.account_balance;
    Sleep(4000);
    return 0;
}