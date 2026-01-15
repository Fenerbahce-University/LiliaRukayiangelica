#include <iostream>
#include "../include/db.h"

int main() {
    std::cout << "Running database tests..." << std::endl;

    // Test update function
    updateStudent(1, "Test Student");

    // Test delete function
    deleteStudent(3);

    std::cout << "Tests executed successfully." << std::endl;

    return 0;
}
