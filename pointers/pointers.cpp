#include <iostream>

int main() {
    // pointer are variables that store a memory address of another variable

    // & address-of operator
    // * dereference operator

    std::string name = "Bro";
    int age = 21;
    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas;

    std::cout << *pName << "\n";
    std::cout << *pAge << "\n";
    std::cout << *pFreePizzas << "\n";
    
    return 0;
}