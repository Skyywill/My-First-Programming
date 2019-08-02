
#include"Final project.h"

int main()
{

	do
	{
		int choice = instructorChoice();
		switch (choice)
		{
		case 1:
			system("cls");
			instructorSection();

			break;

		case 2:
			system("cls");
			displayStudentInformation();

			break;

		default:
			break;
		}

	} while (true);
	cout << "\n\n\n\tPress any key to exit the program...";
	system("pause>>null");
	return 0;

}