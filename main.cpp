//Лабораторная работа №1
#include <iostream>

int main(){
    // 1)переменная-это имя для хранимых в оперативной памяти компьютера данных, по которому мы можем обращаться к ним неоднократно
    // 2)Типы данны:
    std::cout << "1.целочисленные"<< std::endl;
    std::cout << "char, 1 byte, -128..127" << std::endl;
    char per_char1=30;
    char per_char2=40;
    std::cout << per_char1+per_char2 << std::endl;
    std::cout << "short, 2 bytes, -32768..32767" << std::endl;
    short per_short1=15000;
    short per_short2=-2000;
    std::cout << per_short1-per_short2 << std::endl;
    std::cout << "int,4 bytes, -2^31..2^31-1"<< std::endl;
    int per_int1=100000;
    int per_int2=2000000;
    std::cout << per_int2/per_int1 << std::endl;
    std::cout << "long long, 8 bytes, -2^63..2^63-1"<< std::endl;
    long long per_long_long1=1000000000;
    long long per_long_long2=5;
    std::cout << per_long_long1*per_long_long2 << std::endl;
    std::cout << "unsigned int, 4 bytes, 0..2^32-1"<< std::endl;
    std::cout << "2.символьные"<< std::endl; 
    std::cout << "char, 1 byte, -128..127"<< std::endl;
    std::cout << "3.вещественные"<< std::endl; 
    std::cout << "float, 4 bytes, 6-7 numbers"<< std::endl;
    float per_float1=11.0;
    float per_float2=3.0;
    std::cout << per_float1/per_float2 << std::endl;
    std::cout << "double, 8 bytes, 15-16 numbers"<< std::endl;
    double per_double1=11.0;
    double per_double2=3.0;
    std::cout << double(per_double1/per_double2) << std::endl;
    std::cout << "4.логический" << std::endl; 
    std::cout << "bool, 1 byte, True/False"<< std::endl;
    bool a = 3;
    bool b = 0;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    return 0;
}