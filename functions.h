#ifndef HOMEWORK1_HOMEWORK1_FUNCTIONS_H_
#define HOMEWORK1_HOMEWORK1_FUNCTIONS_H_
#include <iostream>
#include <fstream>
#include "student.h"

using namespace std;

//function that adds a student to the file
void Create() {
	ofstream ofile;
	
	ofile.open("StudentsGrades.db",ios::app);
	if (!ofile) {
		cerr << "File couldn't be opened! \n";
	}
	Student temp_student;
	cin >> temp_student;
	ofile << temp_student;
	cout << "Record saved!" << endl;
	ofile.close();

}

//function that finds student with a given faculty number
void SequentialSearch() {
	fstream file;
	file.open("StudentsGrades.db",ios::in);
	if (!file) {
		cerr << "File couldn't be opened! \n";
	}
	unsigned long long int fac_num;
	cin >> fac_num;
	Student temp_student;
	file.seekg(0, ios::beg);
	while (file >> temp_student) {
		if (temp_student.GetFacNum() == fac_num) {
			cout << temp_student;
			break;
		}
	}
	if (temp_student.GetFacNum() != fac_num) {
		cout << "Record not found! \n";
	}
	file.close();
}

#endif
