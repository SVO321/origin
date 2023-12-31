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
    void setCityName(std::string input_city_name)
    {
        city_name = input_city_name;
    }

    void setStreatName(std::string input_streat_name)
    {
        streat_name = input_streat_name;
    }
    void setBldName(int input_bld_number)
    {
        bld_number = input_bld_number;
    }
    void setFltName(int input_flt_number)
    {
        flat_number = input_flt_number;
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
    for (int i = 0; i < number_of_adrs; i++) {
        fin >> city_name;
        array_address[i].setCityName(city_name);
        fin >> streat_name;
        array_address[i].setStreatName(streat_name);
        fin >> bld_number;
        array_address[i].setBldName(bld_number);
        fin >> flat_number;
        array_address[i].setFltName(flat_number);
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