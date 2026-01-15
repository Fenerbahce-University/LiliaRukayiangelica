#include <iostream>
#include "../include/db.h"

int main() {
    std::cout << "Running integration tests..." << std::endl;

    updateStudent(1, "Test Name");
    updateStudent(-1, "");   // Invalid input test

    deleteStudent(3);
    deleteStudent(-5);       // Invalid input test

    std::cout << "Tests completed." << std::endl;
    return 0;
}
