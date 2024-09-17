#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

class Student
{
private:
	int rollno;
	char name[30]; // char name[] imp
	double total;

public:
	Student() {}
	Student(int rollno, char *nm, double total)
	{
		this->rollno = rollno;
		strcpy(this->name, nm);
		this->total = total;
	}
	void display()
	{

		cout << "\t\t----Details---" << endl;
		cout << "\t\t RollNo:" << rollno << endl;
		cout << "\t\t Name:" << name << endl;
		cout << "\t\t Total:" << total << endl;
	}
	// write setters

	int getRollNo()
	{
		return rollno;
	}
	void edit()
	{
		cout << "Name  " << endl;
		cin >> name;
		cout << "Total " << endl;
		cin >> total;
	}
};

void write_student()
{
	// create an object of Student
	int no;
	char nm[30];
	double total;

	cout << "Enter RollNO Name Total " << endl;
	cin >> no >> nm >> total;

	Student sObj(no, nm, total);
	// for storint obj into file
	// create
	cout << "enter name of file to store student " << endl;
	string name;
	cin >> name;
	// open file in binary mode
	ofstream fout;
	fout.open(name, ios::binary | ios::app);

	// write stud object into file using write method

	fout.write((char *) &sObj, sizeof(Student));
	cout << "-----done----" << endl;
	fout.close();
}

void read_student()
{

	// open file where student objects are stored
	ifstream fin;
	string name;
	cout << "Enter File Name " << endl;
	cin >> name;
	fin.open(name, ios::binary);

	Student s;

	while (fin.read((char *) &s, sizeof(Student)))
	{
		s.display();
		cout << "\n"
			 << endl;
	}
	fin.close();
}

void search_student()
{
	int rollno;
	cout << "Enter RollNO to Serach :" << endl;
	cin >> rollno;

	ifstream fin;
	string name;

	cout << "Enter File Name " << endl;
	cin >> name;

	fin.open(name, ios::binary);
	Student stud;
	while (fin.read((char *)&stud, sizeof(Student)))
	{
		if (stud.getRollNo() == rollno)
		{
			stud.display();
		}
	}
	fin.close();
}

// void random_access()
// {
// 	ifstream fin;
// 	string str;

// 	fin.open("MyData.txt");
// 	cout << "\n\n"
// 		 << endl;
// 	//	while(getline(fin,str))
// 	//     {
// 	//	cout<<"\t\t "<<str<<endl;
// 	//	}

// 	cout << "\n\n----first 8 char from file \n\n  " << endl;
// 	fin.seekg(8, ios::beg);
// 	getline(fin, str);
// 	cout << "\t\t " << str;
// 	// last 8 char from end   -8  ios::end
// 	fin.close();
// }
int main()
{
	Student s;
	//	s.display();
	//
	//	s.edit();
	//	s.display();
	int ch;
	cout << "1:write object into file \n 2:Read Object From File \n 3:Search \n 4:RandomAccess \n 5.Edit " << endl;
	do
	{

		cout << "Enter Choice :";
		cin >> ch;
		switch (ch)
		{
		case 1:
			write_student();
			break;
		case 2:
			read_student();
			break;
		case 3:
			search_student();
			break;
		// case 4:
		// 	random_access();
		// 	break;
		case 5:
			s.edit();
		}

	} while (ch != 0);
	cout << "----------------end----------" << endl;
	return 0;
}
