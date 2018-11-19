#include <iostream>
#include "functions.h"
#include "student.h"

using namespace std;

int main() {
	string operation;
	cin >> operation;
	while (operation != "exit") {
		if (operation == "create") {
			Create();
		}
		else if (operation == "sequentialSearch") {
			SequentialSearch();
		}
		else {
			cout << "Invalid operation! \n";
		}
		cin >> operation;
	}
	return 0;
}