// Learning C++ 
// Challenge 06_03
// Upgrade to work with files, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include <fstream>
#include "records.h"

using namespace std;

void initialize();
void initialize(ifstream & inFile);

StudentRecords SR;
int id;
ifstream inFile;
ofstream outFile;
int main(){
	// initialize();
	initialize(inFile);
	cout << "Enter a student ID: ";
	cin >> id;

	SR.report_file(outFile); //SR.report_card(id);
	
	return (0);
}
void initialize()
{
	SR.add_student(1, "George P. Burdell");
	SR.add_student(2,"Nancy Rhodes");

	SR.add_course(1, "Algebra", 5);
	SR.add_course(2, "Physics", 4);
	SR.add_course(3, "English", 3);
	SR.add_course(4,"Economics",4);

	SR.add_grade(1, 1, 'B');
	SR.add_grade(1, 2, 'A');
	SR.add_grade(1, 3, 'C');
	SR.add_grade(2, 1, 'A');
	SR.add_grade(2, 2, 'A'); 
	SR.add_grade(2, 4, 'B');
}

void initialize(ifstream & inFile){
	ifstream inFile;
	string str;
	inFile.open("students.txt");
	if (inFile.fail()) {
		cout << "Could not find this txt";
	} else {
		while (!inFile.eof()) {
			string str;
			getline(inFile, str);
			int student_id = stoi(str);
			getline(inFile, str);
			string student_name = str;
			SR.add_student(student_id, student_name);
		}
		inFile.close();
	}

	inFile.open("courses.txt");
	if (inFile.fail()) {
		cout << "Could not find this txt";
	} else {
		while (!inFile.eof()) {
			getline(inFile, str)
			int course_id = stoi(str);
			getline(inFile, str);
			string course_name = str;
			getline(inFile, str)
			unsigned char credit = strcpy(str);	
			SR.add_course(course_id, course_name, credit);
		}
		inFile.close();
	}

	inFile.open("grades.txt");
	if (inFile.fail()) {
		cout << "Could not find this txt";
	} else {
		while (!inFile.eof()) {
			getline(inFile, str)
			int student_id = stoi(str);
			getline(inFile, str)
			int course_id = stoi(str);
			strcpy(getline(inFile, str));
			char score = str[0];
			SR.add_grade(student_id, course_id, score);
		}
		inFile.close();
	}
}