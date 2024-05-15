//
// Created by citygirls on 5/15/24.
//
#include "Assets.h"

#include <iostream>
int main() {
    Assets employee1("Jemima Elongo");

    employee1.addTag("ABC123");
    employee1.addTag("EFG456");
    employee1.addTag("IJK789");

    std::cout << "Employee: " << employee1.getName() << std::endl;
    std::cout << "Assigned Tags: ";
    for (const auto& tag : employee1.getTags()) {
        std::cout << tag << " ";
    }
    std::cout << std::endl;

    employee1.removeTag("XYZ456");

    std::cout << "After removing tag XYZ456:" << std::endl;
    std::cout << "Assigned Tags: ";
    for (const auto& tag : employee1.getTags()) {
        std::cout << tag << " ";
    }
    std::cout << std::endl;

    return 0;
}