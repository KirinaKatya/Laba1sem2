#pragma once
#include "Info.h"

class School {
private:
	Info* head;

public:
	School();
	void addClass(Info* info);
	void removeClass(char* classs);
	void changeClass(char* classs);
	void printAllClasses();

	void initFromFile(char* file);
	void saveToFile(char* file);

	Info* getLast();

	Info* findByClass(char* classs);
	Info* findByClasshead(char* classhead);
	Info* findByTeacher(char* teacher);
};
