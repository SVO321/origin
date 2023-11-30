#include <iostream>
#include "string"
#include <windows.h>
#include <valarray>

class Fraction
{
private:
    int numerator_;
    int denominator_;
public:
    Fraction(int numerator, int denominator)
    {
        numerator_ = numerator;
        denominator_ = denominator;
    }
    Fraction operator+(Fraction other) const {
        return { ((numerator_ * other.denominator_) + (other.numerator_ * denominator_)), denominator_ * other.denominator_ };
    }
    Fraction operator-(Fraction other) const {
        return { ((numerator_ * other.denominator_) - (other.numerator_ * denominator_)), denominator_ * other.denominator_ };
    }
    Fraction operator*(Fraction other) const {
        if (numerator_ == other.denominator_) {
            return { denominator_, other.numerator_ };
        }
        else if (denominator_ == other.numerator_) {
            return { numerator_, other.denominator_  };
        }
        else {
            return { numerator_ * other.numerator_, denominator_ * other.denominator_ };
        }
    }
    Fraction operator/(Fraction other) const {
        if (numerator_ == other.denominator_) {
            return { denominator_, other.numerator_ };
        }
        else if (denominator_ == other.numerator_) {
            return { numerator_, other.denominator_  };
        }
        else {
            return { numerator_ * other.numerator_, denominator_ * other.denominator_ };
        }
    }
    Fraction& operator++() {
        numerator_++;
        denominator_++;
        return *this;
    }
    Fraction operator--(int)
    {
        Fraction temp = *this;
        --(*this);
        return temp;
    }
void Print() const
    {
        std::cout << numerator_ << "/" << denominator_ << std::endl;
    }
};

void PrintFirst(int input_numerator1, int input_denominator1, int input_numerator2, int input_denominator2)
{
    std::cout << input_numerator1 << "/" << input_denominator1 << " - " << input_numerator2 << "/" << input_denominator2 << " = ";
}

int main()
{
    //setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    int input_numerator1, input_denominator1;
    int input_numerator2, input_denominator2;

    std::cout << "¬ведите числитель дроби 1: ";
    std::cin >> input_numerator1;
    std::cout << "¬ведите знаменатель дроби 1: ";
    std::cin >> input_denominator1;
    std::cout << "¬ведите числитель дроби 2: ";
    std::cin >> input_numerator2;
    std::cout << "¬ведите знаменатель дроби 2: ";
    std::cin >> input_denominator2;
    Fraction f1(input_numerator1, input_denominator1);
    Fraction f2(input_numerator2, input_denominator2);
    Fraction f3(input_denominator2, input_numerator2);

    Fraction SUM_f1_f2 = (f1 + f2);
    PrintFirst(input_numerator1, input_denominator1, input_numerator2, input_denominator2);
    SUM_f1_f2.Print();

    Fraction SUB_f1_f2 = (f1 - f2);
    PrintFirst(input_numerator1, input_denominator1, input_numerator2, input_denominator2);
    SUB_f1_f2.Print();

    Fraction MUL_f1_f2 = (f1 * f2);
    PrintFirst(input_numerator1, input_denominator1, input_numerator2, input_denominator2);
    MUL_f1_f2.Print();

    Fraction DIV_f1_f3 = (f1 / f3);
    PrintFirst(input_numerator1, input_denominator1, input_numerator2, input_denominator2);
    DIV_f1_f3.Print();

    Fraction PRE_f1_f2 = (++f1 * f2);
    std::cout << "++" << input_numerator1 << "/" << input_denominator1 << " * " << input_numerator2 << "/" << input_denominator2 << " = "; // как надо не работает
    PRE_f1_f2.Print();

    Fraction POS_f1_f2 = (f1-- * f2);
    std::cout << input_numerator1 << "/" << input_denominator1 << "--" << " * " << input_numerator2 << "/" << input_denominator2 << " = "; //вообще не работает
    POS_f1_f2.Print();

    Sleep(10000);
    return 0;
}
