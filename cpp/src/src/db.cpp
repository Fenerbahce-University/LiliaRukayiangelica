#include <pqxx/pqxx>
#include <iostream>
#include "db.h"

const std::string connStr =
    "dbname=studentdb user=studentuser password=studentpass host=localhost port=5432";

// Update student information
bool updateStudent(int id, const std::string& name) {
    if (id <= 0 || name.empty()) {
        std::cerr << "Invalid input for update operation." << std::endl;
        return false;
    }

    try {
        pqxx::connection C(connStr);
        pqxx::work W(C);

        pqxx::result R = W.exec_params(
            "UPDATE students SET name = $1 WHERE id = $2",
            name, id
        );

        if (R.affected_rows() == 0) {
            std::cout << "No student found with ID " << id << std::endl;
            return false;
        }

        W.commit();
        std::cout << "Student updated successfully (ID = " << id << ")" << std::endl;
        return true;
    }
    catch (const std::exception& e) {
        std::cerr << "Update error: " << e.what() << std::endl;
        return false;
    }
}

// Delete student record
bool deleteStudent(int id) {
    if (id <= 0) {
        std::cerr << "Invalid ID for delete operation." << std::endl;
        return false;
    }

    try {
        pqxx::connection C(connStr);
        pqxx::work W(C);

        pqxx::result R = W.exec_params(
            "DELETE FROM students WHERE id = $1",
            id
        );

        if (R.affected_rows() == 0) {
            std::cout << "No student found to delete with ID " << id << std::endl;
            return false;
        }

        W.commit();
        std::cout << "Student deleted successfully (ID = " << id << ")" << std::endl;
        return true;
    }
    catch (const std::exception& e) {
        std::cerr << "Delete error: " << e.what() << std::endl;
        return false;
    }
}
