#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;
    double average_grade;

public:
    // Constructor
    Student(std::string n, int a, double avg_grade)
        : name(n), age(a), average_grade(avg_grade) {}

    // Setter methods
    void set_name(const std::string& n) {
        name = n;
    }

    void set_age(int a) {
        age = a;
    }

    void set_average_grade(double avg_grade) {
        average_grade = avg_grade;
    }

    // Getter methods
    std::string get_name() const {
        return name;
    }

    int get_age() const {
        return age;
    }

    double get_average_grade() const {
        return average_grade;
    }

    // Method to return student information
    std::string student_info() const {
        return "Student: " + name + ", Age: " + std::to_string(age) + ", Midlle Rating: " + std::to_string(average_grade);
    }

    // Method to evaluate performance
    std::string evaluate_performance() const {
        if (average_grade > 8) {
            return "Great";
        }
        else if (average_grade >= 6 && average_grade <= 8) {
            return "Good";
        }
        else if (average_grade >= 4 && average_grade < 6) {
            return "Bad";
        }
        else {
            return "Very Bad";
        }
    }

    // Method to increment age
    void increment_age() {
        age += 1;
        std::cout << name << " then " << age << " years old." << std::endl;
    }
};

int main() {
    // Creating objects of the Student class
    Student student1("Maxim Andreevich", 20, 9.0);
    Student student2("Anna Petrova", 19, 7.5);
    Student student3("Alexey Sitkov", 21, 5.8);

    // Displaying student information
    std::cout << student1.student_info() << std::endl;
    std::cout << student2.student_info() << std::endl;
    std::cout << student3.student_info() << std::endl;

    // Assessing student success
    std::cout << student1.get_name() << " - Success: " << student1.evaluate_performance() << std::endl;
    std::cout << student2.get_name() << " - Success: " << student2.evaluate_performance() << std::endl;
    std::cout << student3.get_name() << " - Success: " << student3.evaluate_performance() << std::endl;

    // Incrementing student age
    student1.increment_age();

    return 0;
}
