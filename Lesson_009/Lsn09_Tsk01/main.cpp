#include <iostream>
#include "string"
#include <windows.h>
//#include <valarray>

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
//    [[nodiscard]] double Abs() const {
//        return std::sqrt(numerator_ * numerator_ + denominator_ * denominator_);
//    }

//    bool operator== (Fraction other) const {
//        return Abs() == other.Abs();
//    }

    bool operator== (Fraction other) const {
        return (this->numerator_ * other.denominator_) == (this->denominator_ * other.numerator_);
    }

    bool operator!=(Fraction other) const {
        return !(*this == other);
    }
    bool operator<(Fraction other) const {
        return  (numerator_ * other.denominator_) < (denominator_ * other.numerator_);
    }
    bool operator>(Fraction other) const {
        return  (numerator_ * other.denominator_) > (denominator_ * other.numerator_);
    }
    bool operator<=(Fraction other) const {
        return !(*this > other);
    }
    bool operator>=(Fraction other) const {
        return !(*this < other);
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
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

    //Fraction f1(4, 3);
    //Fraction f2(6, 11);

    std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
    std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
    std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
    std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
    std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
    std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
    Sleep(100000);
    return 0;
}