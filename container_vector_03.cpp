#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

class Student {
	public:
		Student(const std::string& name, int age, double gpa)
			: name_(name), age_(age), gpa_(gpa) {}

		std::string getName() const { return name_; }
		int getAge() const { return age_; }
		double getGPA() const { return gpa_; }

	private:
		std::string name_;
		int age_;
		double gpa_;
};

bool compareByGPA(const Student& a, const Student& b) {
	return a.getGPA() > b.getGPA();
}

bool compareByName(const Student& a, const Student& b) {
	return a.getName() < b.getName();
}

void printStudents(const std::vector<Student>& students) {
	for (const auto& student : students) {
		std::cout << "Name: " << student.getName() << ", Age: " << student.getAge() << ", GPA: " << student.getGPA() << std::endl;
	}
}

int main() {
	std::vector<Student> students;
	students.emplace_back("A", 20, 3.9);
	students.emplace_back("B", 19, 3.6);
	students.emplace_back("C", 21, 3.8);
	students.emplace_back("D", 22, 3.5);

	std::cout << "Original order:" << std::endl;
	printStudents(students);

	// Sort students by GPA
	std::sort(students.begin(), students.end(), compareByGPA);
	std::cout << "Sorted by GPA:" << std::endl;
	printStudents(students);

	// Sort students by name
	std::sort(students.begin(), students.end(), compareByName);
	std::cout << "Sorted by name:" << std::endl;
	printStudents(students);

	return 0;
}
