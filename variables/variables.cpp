#include <iostream>

int main(){

    // integer (whole number)
    int age = 21;
    int year = 2023;
    int days =  7.5;

    std::cout << days << "\n";

    // double (number include decimals)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    std::cout << gpa << "\n";
    
    // single character
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    std::cout << initial << "\n";

    // boolean (true of false)
    bool student = false;
    bool power = true;

    std::cout << student << "\n";

    // string (object that represent a sequence of text)
    std::string name = "Bro";
    std::string day = "Friday";

    std::cout << "Today is " << day << "\n";
    std::cout << "Your name is " << name << "!\n";
    
    return 0;
}