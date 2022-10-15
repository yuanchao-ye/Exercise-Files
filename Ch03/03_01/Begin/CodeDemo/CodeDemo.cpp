// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include "Student.h"
#include "Course.h"
#include "Grade.h"


using namespace std;

int main(){
    Student student1(15, "Lily");
    Course course1(5635, "Bio", 5);

    Grade grade1(student1.getStudentID(), course1.getCourseID(), "A");

    cout << student1.getStudentName() << "studied" << course1.getCourseName() << " she get "
         << grade1.getGrade() << endl;
    return (0);
}
