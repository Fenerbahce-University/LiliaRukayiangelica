#include <pqxx/pqxx>
#include <iostream>
#include "db.h"

const std::string connStr =
    "dbname=studentdb user=studentuser password=studentpass host=localhost port=5432";

void updateStudent(int id, const std::string& name) {
    try {
        pqxx::connection C(connStr);
        pqxx::work W(C);

        W.exec_params(
            "UPDATE students SET name = $1 WHERE id = $2",
            name, id
        );

        W.commit();
        std::cout << "Student updated successfully" << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Update error: " << e.what() << std::endl;
    }
}

void deleteStudent(int id) {
    try {
        pqxx::connection C(connStr);
        pqxx::work W(C);

        W.exec_params(
            "DELETE FROM students WHERE id = $1",
            id
        );

        W.commit();
        std::cout << "Student deleted successfully" << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Delete error: " << e.what() << std::endl;
    }
}
