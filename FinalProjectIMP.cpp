#include "Final project.h"
int instructorChoice()
{
	system("cls");

	cout << "\n\n\t\t1.INSTRUCTOR" << endl;
	cout << "\n\n\t\t2.STUDENT" << endl;
	cout << "\n\n\t\tPlease enter your occupation : ";

	int choice;
	cin >> choice;
	return choice;
}


//================================Teachers part===========================================

// For Instructor's information

//Password Section
void  instructorSection()
{
	int Username;
	string password;
	cout << "\n\n\tEnter your Username:";
	cin >> Username;
	cout << "\n\n\tEnter your Password:";
	cin >> password;
	if (Username == 5257 && password == "quanghoang")
	{
		system("cls");
		instructorMenu();
		system("pause");

	}
	else if (Username != 5257 || password != "quanghoang")
	{
		system("cls");
		cout << "\n\n\t ACCESS DENIED";

	}
}


// display teacher's menu
void instructorMenu()
{
	int instructorSelection;

	cout << "\n\n\n\t\t\tCOURSE EVALUATION\n";
	cout << "\n\t1. List of all the courses";
	cout << "\n\t2. Enter student's data and grades";
	cout << "\n\t3. Search student's grades by student number";
	cout << "\n\t4. Sort the student list by Student ID";
	cout << "\n\t5. List all the students’ grades for a given course";
	cout << "\n\t6. Quit the application";
	cout << "\n\n\t\tEnter your choice: ";
	cin >> instructorSelection;
	instructorChoice(instructorSelection);

}


//teacher choice menu
void instructorChoice(int teacherChoice)
{
	bool run = true;
	do
	{
		switch (teacherChoice)
		{
		case 1:
			instructorCourse();
			break;
		case 2:
			instructorChoice2();

			break;
		case 3:
			instructorChoice3();
			break;
		case 4:
			instructorChoice4();
			break;
		case 5:
			instructorChoice5();
			break;
		case 6:

			cout << "\n\n\tPress Any Key to Exit the Application";
			system("pause");
			run = false;

			break;
		default:
			break;
		}

	} while (run);


}


//display teacher's course
void instructorCourse()
{
	system("cls");
	Course tCourses[3];
	tCourses[0] = { "420-P16-AS","Structed Programming",7052 };
	tCourses[1] = { "420-P16-AS","Structed Programming",7154 };
	tCourses[2] = { "420-P65-AS","Internet Programming II",7064 };
	for (int i = 0; i<3; i++)
	{
		cout << "\n\n\tCourse Number: " << tCourses[i].CourseNumber << endl;
		cout << "\n\n\tCourse Title: " << tCourses[i].courseTitle << endl;
		cout << "\n\n\tGroup: " << tCourses[i].groupNumber << endl;


	}

	system("pause");
	system("cls");
	instructorMenu();


}


//Students information section
void instructorChoice2()
{
	system("cls");
	int tempID;
	float tempPG, tempMG, tempFG;
	bool Grade_Validation = false;
	cout << "Please enter the number of students : ";
	cin >> studentNumber;
	for (int i = 0; i < studentNumber; i++)
	{

		bool ID_Validation = false;
		do
		{
			ID_Validation = false;
			cout << "\n\n\t Enter studentId:";
			cin >> tempID;
			if (studentNumcheck(tempID) != true)
			{
				cout << "Invalid ID.Try again.";
				system("pause");
				ID_Validation = true;

			}
		} while (ID_Validation);
		Students[i].StudNumber = tempID;

		cout << "\n\n\t Enter First name:";
		cin >> Students[i].firstName;
		cout << "\n\n\t Enter Last name:";
		cin >> Students[i].lastName;

		bool PGvaliation = false;
		do
		{
			PGvaliation = false;
			cout << "\n\n\t Enter Project Grade:";
			cin >> tempPG;
			if (GradeVerification(tempPG) != true)
			{
				cout << "\n\n\tInvalid Project Grade.Try again.";
				system("pause");
				PGvaliation = true;
			}
		} while (PGvaliation);
		Students[i].projectGrade = tempPG;

		bool MGvaliation = false;
		do
		{
			MGvaliation = false;
			cout << "\n\n\t Enter Midterm Grade:";
			cin >> tempMG;
			if (GradeVerification(tempMG) != true)
			{
				cout << "\n\n\tInvalid Midterm Grade.Try again.";
				system("pause");
				MGvaliation = true;
			}
		} while (MGvaliation);
		Students[i].midtermGrade = tempMG;

		bool FNvaliation = false;
		do
		{
			FNvaliation = false;
			cout << "\n\n\t Enter Final Exam Grade:";
			cin >> tempFG;
			if (GradeVerification(tempFG) != true)
			{
				cout << "\n\n\tInvalid Final Grade.Try again.";
				system("pause");
				FNvaliation = true;
			}
		} while (FNvaliation);
		Students[i].finalGrade = tempFG;

		cout << "\n\n\t Enter Password:";
		cin >> Students[i].passWord;
	}
	system("pause");
	system("cls");
	instructorMenu();
}


// ID validation
bool studentNumcheck(int I)
{
	int digitNum = 0;
	while (I > 0)
	{
		I = I / 10;
		digitNum++;
	}
	if (digitNum == 7)
	{
		return true;
	}
	return false;
}

// Grades validation
bool GradeVerification(float G)
{
	float min = 0.0f, max = 100.0f;
	return(min < G) && (G <= max);

}


// Display students' grade by entering Id
void instructorChoice3()
{
	if (studentNumber == 0)
	{
		cout << "\n\n\t Student list is empty !";
		system("pause");
		system("cls");
		instructorMenu();
	}
	if (studentNumber != 0)
	{
		int IDinput;
		cout << "\n\n\tPlease Enter the Student ID ";
		cin >> IDinput;

		system("cls");
		cout << "\n\n\tCourse Number:420-P16-AS " << endl;
		cout << "\n\tCourse Title: Structured Programming" << endl;
		cout << "\n\tTeacher: Quang Hoang Cao" << endl;
		cout << "\n\tSession: Winter 2018" << endl;
		cout << "\n\tGroup: 7154" << endl;
		cout << "\n\t\t\t\tASSESSMENT SUMMARY" << endl;
		cout << "Student ID\t" << "Student Name\t" << "Project\t" << "Midterm\t" << "Final Exam\t" << "Final Result\t" << endl;
		cout << "----------\t" << "-----------\t" << "------\t" << "-------\t" << "--------\t" << "-----------\t" << endl;
		bool found = false;
		for (int i = 0; i < studentNumber; i++)
		{


			if (IDinput == Students[i].StudNumber)
			{
				cout << Students[i].StudNumber << "\t\t" << Students[i].firstName << "," << Students[i].lastName << "\t" << Students[i].projectGrade << "\t" << Students[i].midtermGrade << "\t" << Students[i].finalGrade << "\t\t" << Students[i].projectGrade*0.3 + Students[i].midtermGrade*0.3 + Students[i].finalGrade*0.4 << "\t" << endl;
				found = true;
				break;
			}
		}
		if (!found)
		{
			cout << "\n\tInvalid student ID.";
		}
		system("pause");
		system("cls");
		instructorMenu();
	}
}


//Sorting all students Id
void instructorChoice4()
{
	for (int i = 0; i < studentNumber - 1; i++)
	{
		for (int j = i + 1; j < studentNumber; j++)
		{
			if (Students[i].StudNumber > Students[j].StudNumber)
			{
				int tempId = Students[i].StudNumber;
				Students[i].StudNumber = Students[j].StudNumber;
				Students[j].StudNumber = tempId;

				string tempFirstName = Students[i].firstName;
				Students[i].firstName = Students[j].firstName;
				Students[j].firstName = tempFirstName;

				string tempLastName = Students[i].lastName;
				Students[i].lastName = Students[j].lastName;
				Students[j].lastName = tempLastName;

				float tempProjectGrade = Students[i].projectGrade;
				Students[i].projectGrade = Students[j].projectGrade;
				Students[j].projectGrade = tempProjectGrade;

				float tempMidtermGrade = Students[i].midtermGrade;
				Students[i].midtermGrade = Students[j].midtermGrade;
				Students[j].midtermGrade = tempMidtermGrade;

				float tempFinalGrade = Students[i].finalGrade;
				Students[i].finalGrade = Students[j].finalGrade;
				Students[j].projectGrade = tempFinalGrade;

			}
		}
	}
	instructorMenu();

}


//Display all students grades
void instructorChoice5()
{
	if (studentNumber = 0)
	{
		cout << "\n\n\t Student list not available ";
		system("pause");
	}
	else
	{
		system("cls");
		cout << "\n\n\tCourse Number:420-P16-AS " << endl;
		cout << "\n\tCourse Title: Structured Programming" << endl;
		cout << "\n\tTeacher: Quang Hoang Cao" << endl;
		cout << "\n\tSession: Winter 2018" << endl;
		cout << "\n\tGroup: 7154" << endl;
		cout << "\n\t\t\t\tASSESSMENT SUMMARY" << endl;
		cout << "Student ID\t" << "Student Name\t" << "Project\t" << "Midterm\t" << "Final Exam\t" << "Final Result\t" << endl;
		cout << "==========\t" << "===========\t" << "======\t" << "=======\t" << "========\t" << "===========\t" << endl;
		for (int i = 0; i < studentNumber; i++)
		{
			cout << Students[i].StudNumber << "\t\t" << Students[i].firstName << "," << Students[i].lastName << "\t" << Students[i].projectGrade << "\t" << Students[i].midtermGrade << "\t" << Students[i].finalGrade << "\t\t" << Students[i].projectGrade*0.3 + Students[i].midtermGrade*0.3 + Students[i].finalGrade*0.4 << "\t" << endl;
		}

		StudentPass();
		StudentFailed();
		system("pause");
		system("cls");
		instructorMenu();
	}

}

// Verify if the student passes the course section
void StudentPass()
{
	int number = 0;
	for (int i = 0; i < studentNumber; i++)
	{
		if (Students[i].projectGrade*0.3 + Students[i].midtermGrade*0.3 + Students[i].finalGrade*0.4 >= 60)
		{
			number++;
		}

	}
	cout << "\n\n\tNumber of students who passed the course:" << number << endl;


}

//Verify if the student failed the course
void StudentFailed()
{
	int numfailed = 0;
	for (int i = 0; i < studentNumber; i++)
	{
		if (Students[i].projectGrade*0.3 + Students[i].midtermGrade*0.3 + Students[i].finalGrade*0.4< 60)
		{
			numfailed++;
		}

	}
	cout << "\n\n\tNumber of students who failed the course:" << numfailed;

}


// =============================================Students part=====================================================

// viewing students information
void  displayStudentInformation()
{
	int Username;
	string password;
	cout << "\n\n\tPlease enter the username:";
	cin >> Username;
	cout << "\n\n\tPlease enter the password:";
	cin >> password;
	for (int i = 0; i < studentNumber; i++)
	{
		if (Username == Students[i].StudNumber && password == Students[i].passWord)
		{
			system("cls");
			displayStudentMenu();
			system("pause");

		}
		else if (Username != Students[i].StudNumber || password != Students[i].passWord)
		{
			system("cls");
			cout << "\n\n\t Invalid Username/Password";
		}
	}

}


//Display students' Menu
void displayStudentMenu()
{
	int Schoice;//student choice

	cout << "\n\n\n\t\t\tCOURSE EVALUATION\n";
	cout << "\n\t1. List all the courses he/she is taking";
	cout << "\n\t2. View a grade by entering a given evaluation";
	cout << "\n\t3. List all the grades for a given course";
	cout << "\n\t4. Quit the application";
	cout << "\n\n\t\tEnter your choice: ";
	cin >> Schoice;
	studentchoice(Schoice);

}


// Get student's choice
void studentchoice(int T)
{
	bool run = true;
	do
	{
		switch (T)
		{
		case 1:
			studentChoice1();
			break;
		case 2:
			studentChoice2();
			break;
		case 3:
			studentChoice3();
			break;

		case 4:

			cout << "\n\n\tPlease Enter Any Key To Exit";
			system("pause");
			run = false;

			break;
		default:
			break;
		}

	} while (run);

}



//Display courses the student is taking 
void studentChoice1()
{
	system("cls");
	cout << "\n\n\tCourse Number:420-P16-AS " << endl;
	cout << "\n\tCourse Title: Structured Programming" << endl;
	cout << "\n\tTeacher: Quang Hoang Cao" << endl;
	cout << "\n\tSession: Winter 2018" << endl;
	cout << "\n\tGroup: 7154" << endl;

}


void studentChoice2()
{



}

//Display all the students' grades
void studentChoice3()
{

	if (studentNumber == 0)
	{
		cout << "\n\n\t Student list is not found";
		system("pause");
		system("cls");
		displayStudentMenu();
	}
	if (studentNumber != 0)
	{
		int inputStudentID;
		cout << "\n\n\tPlease Enter the Student ID ";
		cin >> inputStudentID;

		system("cls");
		cout << "\n\n\tCourse Number:420-P16-AS " << endl;
		cout << "\n\tCourse Title: Structured Programming" << endl;
		cout << "\n\tTeacher: Quang Hoang Cao" << endl;
		cout << "\n\tSession: Winter 2018" << endl;
		cout << "\n\tGroup: 7154" << endl;
		cout << "\n\t\t\t\tASSESSMENT SUMMARY" << endl;
		cout << "Student ID\t" << "Student Name\t" << "Project\t" << "Midterm\t" << "Final Exam\t" << "Final Result\t" << endl;
		cout << "----------\t" << "-----------\t" << "------\t" << "-------\t" << "--------\t" << "-----------\t" << endl;
		bool found = false;
		for (int i = 0; i < studentNumber; i++)
		{


			if (inputStudentID == Students[i].StudNumber)
			{
				cout << Students[i].StudNumber << "\t\t" << Students[i].firstName << "," << Students[i].lastName << "\t" << Students[i].projectGrade << "\t" << Students[i].midtermGrade << "\t" << Students[i].finalGrade << "\t\t" << Students[i].projectGrade*0.3 + Students[i].midtermGrade*0.3 + Students[i].finalGrade*0.4 << "\t" << endl;
				found = true;
				break;
			}
		}
		if (!found)
		{
			cout << "\n\tInvalid student ID.";
		}
		system("pause");
		system("cls");
		displayStudentMenu();
	}



}