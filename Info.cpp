#include <iostream>
#include <cstring>
#include "Info.h"

Info::Info() {
	char* classs = new char[30];
	char* classhead = new char[30];
	char* averageMark = new char[30];
	char* teacher = new char[30];
	char* studentsNumber = new char[30];
	this->classs[0] = '\0';
	this->classhead[0] = '\0';
	this->averageMark[0] = '\0';
	this->teacher[0] = '\0';
	this->studentsNumber[0] = '\0';
	pnext = NULL;
}

Info::~Info()
{
	delete classs;
	delete classhead;
	delete averageMark;
	delete teacher;
	delete studentsNumber;
}

char* Info::getClasss() {
	return classs;
}

char* Info::getClasshead() {
	return classhead;
}

char* Info::getAverageMark() {
	return averageMark;
}

char* Info::getTeacher() {
	return teacher;
}

char* Info::getStudentsNumber() {
	return studentsNumber;
}

Info* Info::getNext() {
	return pnext;
}

void Info::setNext(Info* info) {
	pnext = info;
}

char* Info::toString() {
	char* str = new char[200];
	str[0] = '\0';
	strcat(str, classs);
	strcat(str, " ");
	strcat(str, classhead);
	strcat(str, " ");
	strcat(str, averageMark);
	strcat(str, " ");
	strcat(str, teacher);
	strcat(str, " ");
	strcat(str, studentsNumber);
	return str;
}

char* Info::toSaveString() {
	char* str = new char[200];
	str[0] = '\0';
	strcat(str, classs);
	strcat(str, ":");
	strcat(str, classhead);
	strcat(str, ":");
	strcat(str, averageMark);
	strcat(str, ":");
	strcat(str, teacher);
	strcat(str, ":");
	strcat(str, studentsNumber);
	return str;
}

void Info::fillInfo() {
	cout << "Enter class num: ";
	cin >> this->getClasss();
	cout << "Enter Head of class (lastname): ";
	cin >> this->getClasshead();
	cout << "Enter average mark: ";
	cin >> this->getAverageMark();
	cout << "Enter Teacher's lastname: ";
	cin >> this->getTeacher();
	cout << "Enter Students number: ";
	cin >> this->getStudentsNumber();
}

void Info::clone(Info* source) {
	strcpy(this->classs, source->getClasss());
	strcpy(this->classhead, source->getClasshead());
	strcpy(this->averageMark, source->getAverageMark());
	strcpy(this->teacher, source->getTeacher());
	strcpy(this->studentsNumber, source->getStudentsNumber());
}
