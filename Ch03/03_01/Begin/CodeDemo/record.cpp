#include 'record.h'

Student::Student(int student_id_i, std::string student_name_i) : student_id(student_id_i), student_name(student_name_i)
{
}

int Student::getStudentID()
{
   return student_id;
} // end getstudent_id

std::string Student::getStudentName()
{
   return student_name;
} // end getstudent_name

void Student::setStudentID(int student_id_i)
{
   student_id = student_id_i;
} // end setstudent_id

void Student::setStudentName(std::string student_name_i)
{
   student_name = student_name_i;
} // end setstudent_name

Course::Course(int course_id_i, std:string course_name_i, int credit_i)
{
   course_id = course_id_i;
   course_name = course_name_i;
   credit = credit_i;
}
int Course::getCourseID()
{
   return course_id;
}

void Course::setCourseID(int course_id_i)
{
   course_id = course_id_i;
}

int Course::getCourseName()
{
   return course_name;
}

void Course::setCourseName(std:string course_name_i)
{
   course_name = course_name_i;
}

int Course::getCredit()
{
   return credit;
} // end getCredit

void Course::setCredit(int credit_i)
{
   credit = credit_i;
} // end setCredit

Grade::Grade(int s_id_i, int c_id_i, std::string grade_i)
{
   s_id = s_id_i;
   c_id = c_id_i;
   grade = grade_i;
}

int get_student_id()
{
   return  s_id;
}
int get_course_id()
{
   return c_id;
}

char Grade::getGrade()
{
   return grade;
}

void Grade::setGrade(char grade_i)
{
   grade = grade_i;
}
