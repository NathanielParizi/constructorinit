/*
 * Person.h
 *
 *  Created on: Aug 18, 2018
 *      Author: justi
 */

#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>
#include <sstream>
using namespace std;


class Person{

private:
	int age;
	string name;

public:

	Person();
	Person(string name, int age);
	string toString();

};



#endif /* PERSON_H_ */
