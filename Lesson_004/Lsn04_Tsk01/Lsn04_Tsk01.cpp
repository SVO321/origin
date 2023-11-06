#include <iostream>
#include <fstream>
#include "string"
#include <windows.h>

void open_error(char file_name[])
{
    std::cout << "I can't open the file - " << file_name << std::endl;
}

class Address {
private:
    int bld_number, flat_number;
    std::string city_name, streat_name;
    std::string combine_of_data;
public:
    void set_input_address_Moscow(std::string city_name, std::string streat_name, int bld_number, int flat_number)
    {
        this->city_name = city_name;
        this->streat_name = streat_name;
        this->bld_number = bld_number;
        this->flat_number = flat_number;
    }
    void set_input_address_Omsk(std::string city_name, std::string streat_name, int bld_number, int flat_number)
    {
        this->city_name = city_name;
        this->streat_name = streat_name;
        this->bld_number = bld_number;
        this->flat_number = flat_number;
    }
    void set_input_address_Novosibirsk(std::string city_name, std::string streat_name, int bld_number, int flat_number)
    {
        this->city_name = city_name;
        this->streat_name = streat_name;
        this->bld_number = bld_number;
        this->flat_number = flat_number;
    }
    std::string get_input_address()
    {
        return combine_of_data = city_name + ", " + streat_name + ", " + std::to_string(bld_number) + ", " + std::to_string(flat_number);
    }
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    std::cout << "Начали работу" << std::endl;
    int number_of_adrs, bld_number, flat_number;
    std::string city_name, streat_name, combine_of_data;
    char file_in[] = "in.txt";
    char file_out[] = "out.txt";
    std::ifstream fin(file_in);
    if (!fin.is_open())
    {
        open_error(file_in); return 0;
    }
    std::ofstream fout(file_out);
    if (!fout.is_open())
    {
        open_error(file_out); return 0;
    }
    fin >> number_of_adrs;
    Address* array_address = new Address[number_of_adrs];
    for (int i = 0; i < number_of_adrs; i++) 
    {
        fin >> city_name >> streat_name >> bld_number >> flat_number;
        switch (i)
        {
        case 0:
            array_address[i].set_input_address_Moscow(city_name, streat_name, bld_number, flat_number);
            break;
        case 1:
            array_address[i].set_input_address_Omsk(city_name, streat_name, bld_number, flat_number);
            break;
        case 2:
            array_address[i].set_input_address_Novosibirsk(city_name, streat_name, bld_number, flat_number);
        default:
            break;
        }
    }
    fout << number_of_adrs << std::endl;
    for (int i = (number_of_adrs - 1); i >= 0; i--) {
        combine_of_data = array_address[i].get_input_address();
        fout << combine_of_data << std::endl;
    }
    std::cout << "Закончили работу" << std::endl;
    fin.close();
    fout.close();
    delete[] array_address;
    return 0;
}