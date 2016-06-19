// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
#include <conio.h>
using namespace std;

struct stud {
	char firstName[15];
	char lastName[20];
	char city[10];
	float points;
	char phoneNumber[10];
};

int main(void) {
	stud Student[10] = { { "Sergey", "Ivanov", "Chisinau", 7.0, "069785649" },
						{ "Vladimir", "Novicov", "Balti", 6.3, "079885713" },
						{ "Maria", "Frolova", "Chisinau", 9.1, "068457835" },
						{ "Vladislav", "Petuhov", "Chisinau", 7.2, "068992334" },
						{ "Evgheniy", "Grishin", "Cahul", 6.6, "079876745" },
						{ "Mihail", "Ostrovskiy", "Chisinau", 7.8, "076905090" },
						{ "Svetlana", "Surkova", "Chisinau", 8.0, "068679492" },
						{ "Vasiliy", "Terem", "Ungheni", 6.9, "060564600" },
						{ "Valentin", "Voskoboinikov", "Edinet", 6.0, "078671084" },
						{ "Grigoriy", "Andreev", "Chisinau", 7.6, "079488834" } };

	cout << endl << "Students from Chisinau:" << endl;
	for (int i = 0; i<10; i++)
		if (Student[i].city == "Chisinau")
			cout << Student[i].firstName << " " << Student[i].lastName << endl;
	cout << endl << "Students from Chisinau with points over 7:" << endl;
	for (int i = 0; i<10; i++)
		if (Student[i].city == "Chisinau" && Student[i].points > 7)
			cout << Student[i].firstName << " " << Student[i].lastName << endl;
	cout << endl << "Students with points between 5 and 8" << endl;
	for (int i = 0; i<10; i++)
		if (Student[i].points>5 && Student[i].points < 8)
			cout << Student[i].firstName << " " << Student[i].lastName << endl;
	cout << endl << "Students with Orange mobile provider" << endl;
	for (int i = 0; i<10; i++)
		if (Student[i].phoneNumber[2] == '6')
			cout << Student[i].firstName << " " << Student[i].lastName << endl;
	cout << endl << "Students whose name begins with V" << endl;
	for (int i = 0; i<10; i++)
		if (Student[i].firstName[1] == 'V')
			cout << Student[i].firstName << " " << Student[i].lastName << endl;
	_getch();
}

