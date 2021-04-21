#include <string>
#include <iostream>
#include <vector>
#include <cstddef>
#include <algorithm>

struct student
{
  std::string name;
	int grade;
};

void readName(student& students);
void readGrade(student& students);

bool gradeCompare(const student& s1, const student& s2)
{
	return (s1.grade > s2.grade);
}
void readStudentData(std::vector<student>& students)
{
	for (int i{ 0 }; i < students.size(); ++i)
	{
		student& s{ students.at(i) };
		readName(s);
		readGrade(s);
	}
}
void readName(student& s)
{
	std::cout << "Enter name: ";
	std::cin >> s.name; 
}
void readGrade(student& s)
{
  std::cout << "Enter " << s.name << "'s grade: ";
	std::cin >> s.grade;
}
void printSortedStudents(std::vector<student>& students)
{
	std::cout << '\n';
	for (const auto& s : students)
    std::cout << s.name << " got a grade of " << s.grade << '\n';
}
int main()
{
	int numStudents{};
	std::cout << "How many students would you like to enter?" << '\n';
	std::cin >> numStudents;

	std::vector<student> students
			(static_cast<std::vector<student>::size_type>(numStudents));
  
	readStudentData(students);

	std::sort(students.begin(), students.end(), gradeCompare);
  
	printSortedStudents(students);

	return 0;
}
