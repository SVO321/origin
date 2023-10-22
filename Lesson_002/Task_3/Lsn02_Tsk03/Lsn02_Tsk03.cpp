#include <iostream>
#include <windows.h>

struct home_address_data
{
    std::string city;
    std::string strit;
    int house_number;
    int flat_number;
    int post_index;
};

void struct_print(home_address_data* adr_info)
{
    std::cout << "Город: " << (*adr_info).city << std::endl;
    std::cout << "Улица: " << (*adr_info).strit << std::endl;
    std::cout << "Номер дома: " << (*adr_info).house_number << std::endl;
    std::cout << "Номер квартиры: " << (*adr_info).flat_number << std::endl;
    std::cout << "Индекс: " << (*adr_info).post_index << std::endl << std::endl;
}

int main(int argc, char** argv)
{
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    home_address_data adr_info;
    adr_info = { "Москва", "Арбат", 12, 8, 123456};
    struct_print(&adr_info);
    Sleep(2000);
    home_address_data* adr_info_array = new home_address_data[4];
    adr_info_array[0] = {"Ижевск", "Пушкина", 59, 143, 953769};
    struct_print(&adr_info_array[0]);
    Sleep(2000);
    adr_info_array[1] = { "Ташкент", "Кирова", 18, 19, 1529060};
    struct_print(&adr_info_array[1]);
    Sleep(4000);  
    return 0;
}