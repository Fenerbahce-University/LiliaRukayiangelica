#ifndef DB_H
#define DB_H

#include <string>

// Update a student's name using ID
bool updateStudent(int id, const std::string& name);

// Delete a student using ID
bool deleteStudent(int id);

#endif
