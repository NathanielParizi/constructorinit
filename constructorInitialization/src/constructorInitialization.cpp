//============================================================================
// Name        : constructorInitialization.cpp
// Author      : Nathaniel-Joel Parizi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"
using namespace std;

int main() {
	cout << "Hello World" << endl; // prints Hello

	Person p1;
	cout << p1.toString() << endl;

	Person p2("Joel",31);
	cout << p2.toString() << endl;

	return 0;
}
