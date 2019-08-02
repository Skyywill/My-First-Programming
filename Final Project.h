//
#ifndef FinalProject_H
#define FinalProject_H

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

struct Course
{
	string CourseNumber;
	string courseTitle;
	int groupNumber;
};
struct student
{
	int StudNumber;
	string firstName;
	string lastName;
	float projectGrade;
	float midtermGrade;
	float finalGrade;
	string passWord;

};

const int studentMaximum = 100;
student Students[studentMaximum];
int   studentNumber = 0;
int   instructorChoice();

void  instructorSection();
void  instructorMenu();
void  instructorChoice(int);
void  instructorCourse();
void  instructorChoice2();
bool  studentNumcheck(int);
bool  GradeVerification(float);
void  instructorChoice3();
void  instructorChoice4();
void instructorChoice5();
void StudentPass();
void StudentFailed();

void displayStudentInformation();
void displayStudentMenu();
void studentchoice(int);
void studentChoice1();
void studentChoice2();
void studentChoice3();



#endif


