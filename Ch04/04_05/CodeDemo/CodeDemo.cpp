// Learning C++ 
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

using namespace std;
//need to use g++ -std=c++11 compiler, otherwise it will have errors.
vector<Student> students = {Student(1,"George P. Burdell"), Student(2,"Nancy Rhodes")};

vector<Course> courses = {Course(1,"Algebra",5), Course(2,"Physics",4), 
                        Course(3,"English",3), Course(4,"Economics",4)};

vector<Grade> grades = {Grade(1,1,'B'), Grade(1,2,'A'), Grade(1,3,'C'), Grade(2,1,'A'), Grade(2,2,'A'), Grade(2,4,'B')};

float GPA = 0.0f;
int id;

int main(){
	cout << "Enter a student ID: ";
	cin >> id;

	// formular to calculate the GPA = (credit1 * grade1 + credit2 * grade2) / (credit1 + credit2);
	float total_points = 0.0f;
	float total_credits = 0.0f;

   for(Grade& grade : grades){ // when use object, use reference to indicate the object.
      // check id
      if (id == grade.get_student_id()){
         //get the grade
         float num_grd;
         switch (grade.get_grade()) {
			case 'A':
				num_grd = 4.0f;
				break;
			case 'B':
            num_grd= 3.0f;
				break;
			case 'C':
				num_grd = 2.0f;
				break;
			case 'D':
            num_grd = 1.0f;
				break;
         default:
            num_grd = 0.0f;
            break;
		   };
         // course id 
         int j = 0;
         while (j < courses.size() && courses[j].get_id() != grade.get_course_id()) {
            j++;
         }
         total_credits += courses[j].get_credits();
         total_points += num_grd * courses[j].get_credits();
	   }
   }

   GPA = total_points / total_credits;

	string student_str;
   int i = 0;
   while (i < students.size() && students[i].get_id() != id) {
      i++;
   }

	student_str = students[i].get_name(); // Change this to the selected student's name

	cout << "The GPA for " << student_str << " is " << GPA << endl;
	return (0);
}




