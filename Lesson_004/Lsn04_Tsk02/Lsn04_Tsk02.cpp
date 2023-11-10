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
    void set_input_address(std::string city_name, std::string streat_name, int bld_number, int flat_number)
    {
        this->city_name = city_name;
        this->streat_name = streat_name;
        this->bld_number = bld_number;
        this->flat_number = flat_number;
    }

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
    std::string get_city_name()
    {
        return city_name;
    }
};

void sorting(Address* array_address, int number_of_adrs) {
    std::string city_name1;
    std::string city_name2;
    bool swapped;
    do {
        swapped = false;
        for (int i = 1; i < number_of_adrs; i++) {
            city_name1 = array_address[i - 1].get_city_name(); //Москва
            city_name2 = array_address[i].get_city_name(); //Новокузнецк
            if (city_name1 > city_name2)
            {
                Address temp_array_address = array_address[i - 1];
                array_address[i - 1] = array_address[i];
                array_address[i] = temp_array_address;
                swapped = true;
            }
        }
    } while (swapped);
}

int main(int argc, char** argv)
{
    //setlocale(LC_ALL, "Russian");
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
    sorting(array_address, number_of_adrs);

    for (int i = 0; i < number_of_adrs; i++) {
        combine_of_data = array_address[i].get_input_address();
        fout << combine_of_data << std::endl;
    }
    std::cout << "Закончили работу" << std::endl;
    fin.close();
    fout.close();
    delete[] array_address;
    Sleep(10000);
    return 0;
}