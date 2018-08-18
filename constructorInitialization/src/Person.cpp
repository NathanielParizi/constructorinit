/*
 * Person.cpp
 *
 *  Created on: Aug 18, 2018
 *      Author: justi
 */


#include <iostream>
#include <sstream>
#include "Person.h"
using namespace std;

Person::Person(){

	cout << "Person created" << endl;

	age = 0;
	name = "_";
}

Person::Person( string name, int age){

	cout << "Person with data created" << endl;

	this->name = name;
	this->age = age;

}

string Person::toString(){

	stringstream ss;

	ss << "My name is ";
	ss<< name;
	ss << " and I am ";
	ss << age;

	return ss.str();
}


