#pragma once
#include <string>

class Student
{
private:
   int student_id;
   std::string student_name;

public:
   Student(int student_id_i, std::string student_name_i);

   int getStudentID();
   std::string getStudentName();
   void setStudentID(int student_id_i);
   void setStudentName(std::string student_name_i);
};

class Course
{
private:
   int course_id;
   std::string course_name;
   unsigned char credit;

public:
   Course(int course_id_i, std::string course_name_i, unsigned char credit_i);

   int getCourseID();

   void setCourseID(int course_id_i);

   int getCourseName();

   void setCourseName(std::string course_name_i);

   unsigned char getCredit();

   void setCredit(unsigned char credit_i);
};

class Grade 
{
private:
   int s_id;
   int c_id
   char grade;
public:
   Grade(int s_id_i, int c_id_i, char grade_i);
   int get_student_id();
   int get_course_id();
   std::string getGrade();
   void setGrade(char grade_i);
};