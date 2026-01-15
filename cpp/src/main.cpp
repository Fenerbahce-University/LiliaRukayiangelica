#include <iostream>
#include "db.h"

int main() {
    std::cout << "Starting C++ database application..." << std::endl;

    bool updateResult = updateStudent(1, "Angelica Mwk");
    if (!updateResult) {
        std::cout << "Update operation failed." << std::endl;
    }

    bool deleteResult = deleteStudent(2);
    if (!deleteResult) {
        std::cout << "Delete operation failed." << std::endl;
    }

    std::cout << "Application execution finished." << std::endl;
    return 0;
}
